%{
#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
extern int yylineno;

void yyerror(const char *s);
int yylex(void);
%}

%precedence TYPE_SPEC

//for if else
%nonassoc THEN
%nonassoc ELSE

/* Operator precedence and associativity */
%left OR AND
%left EQ NEQ GT GE LE LT
%left PLUS MINUS
%left MULT DIV MOD
%right NOT
%right ASSIGN

/* Token declarations */
%token INT FLOAT BOOL RETURN VOID MAIN PRINTF SCANF FOR IF ELSE WHILE SWITCH CASE TRUE FALSE BREAK DEFAULT STRING
%token IDENTIFIER NUMBER
%token PLUS MINUS MULT DIV MOD ASSIGN LPAREN RPAREN LBRACE RBRACE SEMI LE LT GT GE EQ NEQ OR AND NOT COMMA INCR DECR COLON


%%

/* A program is now a list of functions */
program:
    declaration_or_function_list 
    { printf("Expanding rule: program → declaration_or_function_list (line %d)\n", yylineno); }
    ;

declaration_or_function_list:
    declaration_or_function_list declaration_or_function 
    { printf("Expanding rule: declaration_or_function_list → declaration_or_function_list declaration_or_function (line %d)\n", yylineno); }
    | declaration_or_function 
    { printf("Expanding rule: declaration_or_function_list → declaration_or_function (line %d)\n", yylineno); }
    ;

declaration_or_function:
    global_declaration 
    | function_definition
    ;

global_declaration:
    type_specifier var_list SEMI 
    { printf("Expanding rule: global_declaration → type_specifier var_list SEMI (line %d)\n", yylineno); }
    ;

/* Function definition supports both main and additional functions.
   We allow MAIN as a special function name by using main_or_id.
*/
function_definition:
    type_specifier main_or_id LPAREN parameter_list_opt RPAREN compound_stmt { printf("Expanding rule: function_definition → type_specifier main_or_id LPAREN parameter_list_opt RPAREN compound_stmt (line %d)\n", yylineno); }
    | type_specifier main_or_id LPAREN parameter_list_opt RPAREN SEMI { printf("Expanding rule: function_definition → type_specifier main_or_id LPAREN parameter_list_opt RPAREN SEMI (line %d)\n", yylineno); }
    ;

main_or_id:
    MAIN { printf("Expanding rule: main_or_id → MAIN (line %d)\n", yylineno); }
    | IDENTIFIER { printf("Expanding rule: main_or_id → IDENTIFIER (line %d)\n", yylineno); }
    ;

type_specifier:
    INT { printf("Expanding rule: type_specifier → INT (line %d)\n", yylineno); }
	| FLOAT { printf("Expanding rule: type_specifier → FLOAT (line %d)\n", yylineno); }
    | BOOL { printf("Expanding rule: type_specifier → BOOL (line %d)\n", yylineno); }
    | VOID { printf("Expanding rule: type_specifier → VOID (line %d)\n", yylineno); }
    ;

/* Parameter list (optional) */
parameter_list_opt:
    /* empty */ { printf("Expanding rule: parameter_list_opt → /* empty */ (line %d)\n", yylineno); }
    | parameter_list { printf("Expanding rule: parameter_list_opt → parameter_list (line %d)\n", yylineno); }
    ;

parameter_list:
    parameter_declaration { printf("Expanding rule: parameter_list → parameter_declaration (line %d)\n", yylineno); }
    | parameter_list COMMA parameter_declaration { printf("Expanding rule: parameter_list → parameter_list COMMA parameter_declaration (line %d)\n", yylineno); }
    ;

parameter_declaration:
    type_specifier IDENTIFIER { printf("Expanding rule: parameter_declaration → type_specifier IDENTIFIER (line %d)\n", yylineno); }
    ;

/* Compound statement: a block of statements */
compound_stmt:
    LBRACE stmt_list_opt RBRACE { printf("Expanding rule: compound_stmt → LBRACE stmt_list_opt RBRACE (line %d)\n", yylineno); }
    ;

stmt_list_opt:
    /* empty */ { printf("Expanding rule: stmt_list_opt → /* empty */ (line %d)\n", yylineno); }
    | stmt_list { printf("Expanding rule: stmt_list_opt → stmt_list (line %d)\n", yylineno); }
    ;

stmt_list:
    stmt_list stmt { printf("Expanding rule: stmt_list → stmt_list stmt (line %d)\n", yylineno); }
    | stmt { printf("Expanding rule: stmt_list → stmt (line %d)\n", yylineno); }
    ;

/* Statements */
stmt:
    IDENTIFIER ASSIGN expr SEMI { printf("Expanding rule: stmt → IDENTIFIER ASSIGN expr SEMI (line %d)\n", yylineno); }
    | IDENTIFIER INCR SEMI { printf("Expanding rule: stmt → IDENTIFIER INCR SEMI (line %d)\n", yylineno); }
    | IDENTIFIER DECR SEMI { printf("Expanding rule: stmt → IDENTIFIER DECR SEMI (line %d)\n", yylineno); }
    | INCR IDENTIFIER SEMI { printf("Expanding rule: stmt → INCR IDENTIFIER SEMI (line %d)\n", yylineno); }
    | DECR IDENTIFIER SEMI { printf("Expanding rule: stmt → DECR IDENTIFIER SEMI (line %d)\n", yylineno); }
    | IDENTIFIER LPAREN arg_list_opt RPAREN SEMI { printf("Expanding rule: stmt → IDENTIFIER LPAREN arg_list_opt RPAREN SEMI (line %d)\n", yylineno); }
    | PRINTF LPAREN arg_list RPAREN SEMI { printf("Expanding rule: stmt → PRINTF LPAREN arg_list RPAREN SEMI (line %d)\n", yylineno); }
    | SCANF LPAREN IDENTIFIER RPAREN SEMI { printf("Expanding rule: stmt → SCANF LPAREN IDENTIFIER RPAREN SEMI (line %d)\n", yylineno); }
    | FOR LPAREN init_expr SEMI expr SEMI update_expr RPAREN compound_stmt { printf("Expanding rule: stmt → FOR (...) (line %d)\n", yylineno); }
    | WHILE LPAREN expr RPAREN compound_stmt { printf("Expanding rule: stmt → WHILE LPAREN expr RPAREN compound_stmt (line %d)\n", yylineno); }
    | IF LPAREN expr RPAREN compound_stmt %prec THEN { printf("Expanding rule: stmt → IF LPAREN expr RPAREN compound_stmt (line %d)\n", yylineno); }
    | IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt { printf("Expanding rule: stmt → IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt (line %d)\n", yylineno); }
    | RETURN expr SEMI { printf("Expanding rule: stmt → RETURN expr SEMI (line %d)\n", yylineno); }
    | SWITCH LPAREN expr RPAREN LBRACE case_list RBRACE { printf("Expanding rule: stmt → SWITCH LPAREN expr RPAREN LBRACE case_list RBRACE (line %d)\n", yylineno); }
    | declaration SEMI { printf("Expanding rule: stmt → declaration SEMI (line %d)\n", yylineno); }  /* This handles variable declarations like "int a;" */
    ;


/* FOR loop initialization: Can be a declaration (int i = 0) or an assignment (i = 0) */
init_expr:
    declaration { printf("Expanding rule: init_expr → declaration (line %d)\n", yylineno); }
    | IDENTIFIER ASSIGN expr { printf("Expanding rule: init_expr → IDENTIFIER ASSIGN expr (line %d)\n", yylineno); }
    ;

/* FOR loop update: Supports increment, decrement, or an assignment expression */
update_expr:
    IDENTIFIER INCR { printf("Expanding rule: update_expr → IDENTIFIER INCR (line %d)\n", yylineno); }
    | IDENTIFIER DECR { printf("Expanding rule: update_expr → IDENTIFIER DECR (line %d)\n", yylineno); }
    | IDENTIFIER ASSIGN expr { printf("Expanding rule: update_expr → IDENTIFIER ASSIGN expr (line %d)\n", yylineno); }
    ;

/* Declaration Handling */
declaration:
    type_specifier var_list  { printf("Expanding rule: declaration → type_specifier var_list (line %d)\n", yylineno); }
    ;

/* List of variables with optional initialization */
var_list:
    var_decl { printf("Expanding rule: var_list → var_decl (line %d)\n", yylineno); }
    | var_list COMMA var_decl { printf("Expanding rule: var_list → var_list COMMA var_decl (line %d)\n", yylineno); }
    ;

/* Individual Variable Declaration With Optional Assignment */
var_decl:
    IDENTIFIER { printf("Expanding rule: var_decl → IDENTIFIER (line %d)\n", yylineno); }
    | IDENTIFIER ASSIGN expr { printf("Expanding rule: var_decl → IDENTIFIER ASSIGN expr (line %d)\n", yylineno); }
    ;

/* Switch statement cases */
case_list:
    case_list case_stmt { printf("Expanding rule: case_list → case_list case_stmt (line %d)\n", yylineno); }
    | case_stmt { printf("Expanding rule: case_list → case_stmt (line %d)\n", yylineno); }
    ;

case_stmt:
    CASE NUMBER COLON stmt_list BREAK SEMI { printf("Expanding rule: case_stmt → CASE NUMBER COLON stmt_list BREAK SEMI (line %d)\n", yylineno); }
    | DEFAULT COLON stmt_list BREAK SEMI { printf("Expanding rule: case_stmt → DEFAULT COLON stmt_list BREAK SEMI (line %d)\n", yylineno); }
    | DEFAULT COLON stmt_list { printf("Expanding rule: case_stmt → DEFAULT COLON stmt_list (line %d)\n", yylineno); }
    ;

	
/* Expression productions */
expr:
    expr OR expr { printf("Expanding rule: expr → expr OR expr (line %d)\n", yylineno); }
    | expr EQ expr { printf("Expanding rule: expr → expr EQ expr (line %d)\n", yylineno); }
    | expr GT expr { printf("Expanding rule: expr → expr GT expr (line %d)\n", yylineno); }
    | expr LT expr { printf("Expanding rule: expr → expr LT expr (line %d)\n", yylineno); }
    | expr LE expr { printf("Expanding rule: expr → expr LE expr (line %d)\n", yylineno); }
    | expr PLUS expr { printf("Expanding rule: expr → expr PLUS expr (line %d)\n", yylineno); }
    | expr MINUS expr { printf("Expanding rule: expr → expr MINUS expr (line %d)\n", yylineno); }
    | expr MULT expr { printf("Expanding rule: expr → expr MULT expr (line %d)\n", yylineno); }
    | expr DIV expr { printf("Expanding rule: expr → expr DIV expr (line %d)\n", yylineno); }
    | expr MOD expr { printf("Expanding rule: expr → expr MOD expr (line %d)\n", yylineno); }
	| expr GE expr { printf("Expanding rule: expr → expr GE expr (line %d)\n", yylineno); }
    | expr NEQ expr { printf("Expanding rule: expr → expr NEQ expr (line %d)\n", yylineno); }
    | expr AND expr { printf("Expanding rule: expr → expr AND expr (line %d)\n", yylineno); }
    | NOT expr { printf("Expanding rule: expr → NOT expr (line %d)\n", yylineno); }
    | LPAREN expr RPAREN { printf("Expanding rule: expr → LPAREN expr RPAREN (line %d)\n", yylineno); }
    | IDENTIFIER { printf("Expanding rule: expr → IDENTIFIER (line %d)\n", yylineno); }
	| TRUE { printf("Expanding rule: expr → TRUE (line %d)\n", yylineno); }
    | FALSE { printf("Expanding rule: expr → FALSE (line %d)\n", yylineno); }
    | NUMBER { printf("Expanding rule: expr → NUMBER (line %d)\n", yylineno); }
    | FLOAT { printf("Expanding rule: expr → FLOAT (line %d)\n", yylineno); }
    | IDENTIFIER LPAREN arg_list_opt RPAREN { printf("Expanding rule: expr → IDENTIFIER LPAREN arg_list_opt RPAREN (line %d)\n", yylineno); }
    | STRING { printf("Expanding rule: expr → STRING (line %d)\n", yylineno); } 
    ;
    

/* Argument list */
arg_list_opt:
    /* empty */ { printf("Expanding rule: arg_list_opt → /* empty */ (line %d)\n", yylineno); }
    | arg_list { printf("Expanding rule: arg_list_opt → arg_list (line %d)\n", yylineno); }
    ;

arg_list:
    expr { printf("Expanding rule: arg_list → expr (line %d)\n", yylineno); }
    | arg_list COMMA expr { printf("Expanding rule: arg_list → arg_list COMMA expr (line %d)\n", yylineno); }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error: %s\n", s);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }
    yyin = file;
    int result = yyparse();
    fclose(file);
    if (result == 0) {
        printf("Parsing successful!\n");
    } else {
        printf("Parsing failed with errors.\n");
    }
    return result;
}