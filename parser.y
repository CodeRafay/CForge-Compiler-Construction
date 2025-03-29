%{
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

extern FILE *yyin;
void yyerror(const char *s);
int yylex(void);

int level = 0;  // Track parsing level

// Define yylval as a union
//#define YYSTYPE char*  // Define YYSTYPE as char* for simplicity
extern YYSTYPE yylval;  // Define yylval to hold string values

void print_level() {
    for (int i = 0; i < level; i++) {
        printf("  ");  // Indentation for clarity
    }
}
%}

%union {
    char* str;
}

/* Operator precedence and associativity */
%left OR
%left EQ GT LE
%left PLUS MINUS
%left MULT DIV MOD
%right ASSIGN

/* Token declarations */
%token INT RETURN MAIN PRINTF SCANF FOR IF ELSE WHILE
%token <str> IDENTIFIER 
%token <str> NUMBER
%token PLUS MINUS MULT DIV MOD ASSIGN LPAREN RPAREN LBRACE RBRACE SEMI LE GT EQ OR COMMA INCR

%%

/* A program is now a list of functions */
program:
      function_list {
          print_level();
          printf("Level %d: program → function_list\n", level);
      }
    ;

function_list:
      function_list function {
          print_level();
          printf("Level %d: function_list → function_list function\n", level);
      }
    | function {
          print_level();
          printf("Level %d: function_list → function\n", level);
      }
    ;

function:
      function_definition {
          print_level();
          printf("Level %d: function → function_definition\n", level);
      }
    ;

/* Function definition */
function_definition:
      type_specifier main_or_id LPAREN parameter_list_opt RPAREN compound_stmt {
          print_level();
          printf("Level %d: function_definition → type_specifier main_or_id (parameter_list_opt) compound_stmt\n", level);
      }
    ;

main_or_id:
      MAIN {
          print_level();
          printf("Level %d: main_or_id → MAIN\n", level);
      }
    | IDENTIFIER {
          print_level();
          printf("Level %d: main_or_id → IDENTIFIER (%s)\n", level, yylval);
      }
    ;

type_specifier:
      INT {
          print_level();
          printf("Level %d: type_specifier → INT\n", level);
      }
    ;

parameter_list_opt:
      /* empty */ {
          print_level();
          printf("Level %d: parameter_list_opt → ε\n", level);
      }
    | parameter_list {
          print_level();
          printf("Level %d: parameter_list_opt → parameter_list\n", level);
      }
    ;

parameter_list:
      parameter_declaration {
          print_level();
          printf("Level %d: parameter_list → parameter_declaration\n", level);
      }
    | parameter_list COMMA parameter_declaration {
          print_level();
          printf("Level %d: parameter_list → parameter_list , parameter_declaration\n", level);
      }
    ;

parameter_declaration:
      type_specifier IDENTIFIER {
          print_level();
          printf("Level %d: parameter_declaration → type_specifier IDENTIFIER (%s)\n", level, yytext);
      }
    ;

compound_stmt:
      LBRACE stmt_list_opt RBRACE {
          print_level();
          printf("Level %d: compound_stmt → { stmt_list_opt }\n", level);
      }
    ;

stmt_list_opt:
      /* empty */ {
          print_level();
          printf("Level %d: stmt_list_opt → ε\n", level);
      }
    | stmt_list {
          print_level();
          printf("Level %d: stmt_list_opt → stmt_list\n", level);
      }
    ;

stmt_list:
      stmt_list stmt {
          print_level();
          printf("Level %d: stmt_list → stmt_list stmt\n", level);
      }
    | stmt {
          print_level();
          printf("Level %d: stmt_list → stmt\n", level);
      }
    ;

stmt:
      IDENTIFIER ASSIGN expr SEMI {
          print_level();
          printf("Level %d: stmt → IDENTIFIER (%s) = expr ;\n", level, yytext);
      }
    | PRINTF LPAREN expr RPAREN SEMI {
          print_level();
          printf("Level %d: stmt → PRINTF (expr) ;\n", level);
      }
    | SCANF LPAREN IDENTIFIER RPAREN SEMI {
          print_level();
          printf("Level %d: stmt → SCANF (IDENTIFIER (%s)) ;\n", level, yytext);
      }
    | FOR LPAREN IDENTIFIER ASSIGN expr SEMI expr SEMI IDENTIFIER INCR RPAREN compound_stmt {
          print_level();
          printf("Level %d: stmt → FOR loop statement\n", level);
      }
    | WHILE LPAREN expr RPAREN compound_stmt {
          print_level();
          printf("Level %d: stmt → WHILE (expr) compound_stmt\n", level);
      }
    | IF LPAREN expr RPAREN compound_stmt {
          print_level();
          printf("Level %d: stmt → IF (expr) compound_stmt\n", level);
      }
    | IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt {
          print_level();
          printf("Level %d: stmt → IF (expr) compound_stmt ELSE compound_stmt\n", level);
      }
    | RETURN expr SEMI {
          print_level();
          printf("Level %d: stmt → RETURN expr ;\n", level);
      }
    | type_specifier IDENTIFIER SEMI {
          print_level();
          printf("Level %d: stmt → type_specifier IDENTIFIER (%s) ;\n", level, yytext);
      }
    | type_specifier IDENTIFIER ASSIGN expr SEMI {
          print_level();
          printf("Level %d: stmt → type_specifier IDENTIFIER (%s) = expr ;\n", level, yytext);
      }
    ;
/* Argument list (optional) */
arg_list_opt:
      /* empty */ {
          print_level();
          printf("Level %d: arg_list_opt → ε\n", level);
      }
    | arg_list {
          print_level();
          printf("Level %d: arg_list_opt → arg_list\n", level);
      }
    ;

arg_list:
      expr {
          print_level();
          printf("Level %d: arg_list → expr\n", level);
      }
    | arg_list COMMA expr {
          print_level();
          printf("Level %d: arg_list → arg_list , expr\n", level);
      }
    ;


/* Expression rules */
expr:
      expr OR expr { print_level(); printf("Level %d: expr → expr OR expr\n", level); }
    | expr EQ expr { print_level(); printf("Level %d: expr → expr EQ expr\n", level); }
    | expr GT expr { print_level(); printf("Level %d: expr → expr GT expr\n", level); }
    | expr LE expr { print_level(); printf("Level %d: expr → expr LE expr\n", level); }
    | expr PLUS expr { print_level(); printf("Level %d: expr → expr PLUS expr\n", level); }
    | expr MINUS expr { print_level(); printf("Level %d: expr → expr MINUS expr\n", level); }
    | expr MULT expr { print_level(); printf("Level %d: expr → expr MULT expr\n", level); }
    | expr DIV expr { print_level(); printf("Level %d: expr → expr DIV expr\n", level); }
    | expr MOD expr { print_level(); printf("Level %d: expr → expr MOD expr\n", level); }
    | LPAREN expr RPAREN { print_level(); printf("Level %d: expr → ( expr )\n", level); }
    | IDENTIFIER { print_level(); printf("Level %d: expr → IDENTIFIER (%s)\n", level, yylval); }
    | NUMBER { print_level(); printf("Level %d: expr → NUMBER (%s)\n", level, yytext); }
    | IDENTIFIER LPAREN arg_list_opt RPAREN {
        print_level();
        printf("Level %d: expr → function call IDENTIFIER (%s)\n", level, yytext);
      }
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
    
    printf("####### Starting parsing #######\n");
    
    int result = yyparse();
    fclose(file);
    if (result == 0) {
        printf("Parsing successful!\n");
    } else {
        printf("Parsing failed with errors.\n");
    }
    return result;
}
