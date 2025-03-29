%{
#include <stdlib.h>
#include <stdio.h>

// Define tokens manually for standalone mode
#ifdef STANDALONE_LEXER
#define INT 1
#define RETURN 2
#define MAIN 3
#define PRINTF 4
#define SCANF 5
#define FOR 6
#define IF 7
#define ELSE 8
#define WHILE 9
#define LE 10
#define GT 11
#define EQ 12
#define OR 13
#define INCR 14
#define COMMA 15
#define ASSIGN 16
#define LPAREN 17
#define RPAREN 18
#define LBRACE 19
#define RBRACE 20
#define SEMI 21
#define PLUS 22
#define MINUS 23
#define MULT 24
#define DIV 25
#define MOD 26
#define NUMBER 27
#define IDENTIFIER 28
#else
#include "parser.tab.h"  // Include the Bison-generated header file
#endif

// Function to handle token returns conditionally
int return_token(int token) {
#ifndef STANDALONE_LEXER
    return token;
#else
    return token; // Return the actual token in standalone mode
#endif
}

// Function to handle yylval assignment conditionally
void assign_yylval(const char* text) {
#ifndef STANDALONE_LEXER
    yylval = atoi(text);
#endif
}
%}

/* Regular expression definitions */
DIGIT   [0-9]+
ID      [a-zA-Z_][a-zA-Z0-9_]*
WS      [ \t]+
NEWLINE \n

%%

"#".*               { printf("Preprocessor directive: %s\n", yytext); }
"int"               { printf("Token: INT, Lexeme: %s\n", yytext); return return_token(INT); }
"return"            { printf("Token: RETURN, Lexeme: %s\n", yytext); return return_token(RETURN); }
"main"              { printf("Token: MAIN, Lexeme: %s\n", yytext); return return_token(MAIN); }
"printf"            { printf("Token: PRINTF, Lexeme: %s\n", yytext); return return_token(PRINTF); }
"scanf"             { printf("Token: SCANF, Lexeme: %s\n", yytext); return return_token(SCANF); }
"for"               { printf("Token: FOR, Lexeme: %s\n", yytext); return return_token(FOR); }
"if"                { printf("Token: IF, Lexeme: %s\n", yytext); return return_token(IF); }
"else"              { printf("Token: ELSE, Lexeme: %s\n", yytext); return return_token(ELSE); }
"while"             { printf("Token: WHILE, Lexeme: %s\n", yytext); return return_token(WHILE); }
"<="                { printf("Token: LE, Lexeme: %s\n", yytext); return return_token(LE); }
">"                 { printf("Token: GT, Lexeme: %s\n", yytext); return return_token(GT); }
"=="                { printf("Token: EQ, Lexeme: %s\n", yytext); return return_token(EQ); }
"||"                { printf("Token: OR, Lexeme: %s\n", yytext); return return_token(OR); }
"++"                { printf("Token: INCR, Lexeme: %s\n", yytext); return return_token(INCR); }
","                 { printf("Token: COMMA, Lexeme: %s\n", yytext); return return_token(COMMA); }
"="                 { printf("Token: ASSIGN, Lexeme: %s\n", yytext); return return_token(ASSIGN); }
"("                 { printf("Token: LPAREN, Lexeme: %s\n", yytext); return return_token(LPAREN); }
")"                 { printf("Token: RPAREN, Lexeme: %s\n", yytext); return return_token(RPAREN); }
"{"                 { printf("Token: LBRACE, Lexeme: %s\n", yytext); return return_token(LBRACE); }
"}"                 { printf("Token: RBRACE, Lexeme: %s\n", yytext); return return_token(RBRACE); }
";"                 { printf("Token: SEMI, Lexeme: %s\n", yytext); return return_token(SEMI); }
"+"                 { printf("Token: PLUS, Lexeme: %s\n", yytext); return return_token(PLUS); }
"-"                 { printf("Token: MINUS, Lexeme: %s\n", yytext); return return_token(MINUS); }
"*"                 { printf("Token: MULT, Lexeme: %s\n", yytext); return return_token(MULT); }
"/"                 { printf("Token: DIV, Lexeme: %s\n", yytext); return return_token(DIV); }
"%"                 { printf("Token: MOD, Lexeme: %s\n", yytext); return return_token(MOD); }
{DIGIT}             { yylval.str = strdup(yytext); printf("Token: NUMBER, Lexeme: %s\n", yytext); assign_yylval(yytext); return return_token(NUMBER); }
{ID}                { yylval.str = strdup(yytext); printf("Token: IDENTIFIER, Lexeme: %s\n", yytext); return return_token(IDENTIFIER); } // Assign yytext to yylval
{WS}                { /* ignore whitespace */ }
{NEWLINE}           { /* ignore newlines */ }
.                   { printf("Unknown character: %s\n", yytext); }

%%

int yywrap(void) {
    return 1;
}

// Conditionally include the main function for standalone mode
#ifdef STANDALONE_LEXER
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    yyin = file;  // Set input file
    
    while (yylex()) {
        // Keep calling yylex() until EOF
    }

    fclose(file);
    return 0;
}
#endif
