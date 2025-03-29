%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
extern int yylineno;
extern char* yytext;
void yyerror(const char* s);
%}

%union {
    int num;        // For numbers
    char* id;       // For identifiers
}

%token <num> NUMBER
%token <id> IDENTIFIER
%token INT RETURN PRINTF MAIN LBRACE RBRACE SEMICOLON ASSIGN PLUS MULTIPLY LPAREN RPAREN QUOTE NEWLINE PERCENT D PREPROCESSOR_DIRECTIVE

%%

program:
    preprocessor_directive function
    | function
    ;

preprocessor_directive:
    PREPROCESSOR_DIRECTIVE
    ;

function:
    INT MAIN LPAREN RPAREN LBRACE statements RBRACE
    ;

statements:
    statement
    | statements statement
    ;

statement:
    declaration
    | assignment
    | print_statement
    | return_statement
    ;

declaration:
    INT IDENTIFIER SEMICOLON
    ;

assignment:
    IDENTIFIER ASSIGN expression SEMICOLON
    ;

print_statement:
    PRINTF LPAREN QUOTE format QUOTE RPAREN SEMICOLON
    ;

format:
    PERCENT D
    ;

return_statement:
    RETURN NUMBER SEMICOLON
    ;

expression:
    term
    | expression PLUS term
    | expression MULTIPLY term
    ;

term:
    NUMBER
    | IDENTIFIER
    ;

%%

void yyerror(const char* s) {
    fprintf(stderr, "Error: %s at line %d, token: %s\n", s, yylineno, yytext);
}

int main() {
    yyparse();
    return 0;
}