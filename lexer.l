%{
#include <stdio.h>
#include "y.tab.h"
%}

%option yylineno

%%

^#include[ \t]*[<\"][a-zA-Z0-9_.]+[>\"]\n    { return PREPROCESSOR_DIRECTIVE; }
"int"       { return INT; }
"return"    { return RETURN; }
"printf"    { return PRINTF; }
"main"      { return MAIN; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }
";"         { return SEMICOLON; }
"="         { return ASSIGN; }
"+"         { return PLUS; }
"*"         { return MULTIPLY; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"\""        { return QUOTE; }
"\n"        { return NEWLINE; }
"%"         { return PERCENT; }
"d"         { return D; }
[0-9]+      { yylval.num = atoi(yytext); return NUMBER; }
[a-zA-Z]+   { yylval.id = strdup(yytext); return IDENTIFIER; }
[ \t]       ; // Ignore whitespace
.           { return yytext[0]; }

%%

int yywrap() {
    return 1;
}

