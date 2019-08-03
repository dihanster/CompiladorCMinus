/****************************************************/
/* File: tiny.l                                     */
/* Lex specification for TINY                       */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

%{
#include "globals.h"
#include "util.h"
#include "scan.h"

/* lexeme of identifier or reserved word */
char tokenString[MAXTOKENLEN+1];

static int yylex(void);

%}

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
identifier  {letter}+
newline     \n
whitespace  [ \t]+

%option noyywrap
%%

"if"            {return IF;}
"else"          {return ELSE;}
"while"         {return WHILE;}
"void"          {return VOID;}
"return"        {return RETURN;}
"int"           {return INT;}
"<="            {return LET;}
">="            {return GET;}
"!="            {return DIF;}
"=="            {return EQ;}
"="             {return ASSIGN;}
"<"             {return LT;}
">"             {return GT;}
"+"             {return PLUS;}
"-"             {return MINUS;}
"*"             {return TIMES;}
"/"             {return OVER;}
"("             {return LPAREN;}
")"             {return RPAREN;}
"["             {return LBRA;}
"]"             {return RBRA;}
"{"             {return LWRE;}
"}"             {return RWRE;}
";"             {return SEMI;}
","             {return COMM;}
{number}        {return NUM;}
{identifier}    {return ID;}
{newline}       {lineno++;}
{whitespace}    {/* skip whitespace */}
"/*"            { char c;
                  while(1){ 
                    c = input();
                    if (c == EOF) break;
                    if (c == '\n') lineno++;
                    if (c == '*'){ 
                      c = input();
                      if (c == '/') break;
                    }
                  } 
                }
<<EOF>>         {return ENDFILE;}
.               {return ERROR;}

%%

TokenType getToken(void){
  static int firstTime = TRUE;
  TokenType currentToken;
  if (firstTime){ 
    firstTime = FALSE;
    lineno++;
    yyin = source;
    yyout = listing;
  }
  currentToken = yylex();
  strncpy(tokenString,yytext,MAXTOKENLEN);
  if (TraceScan){
    fprintf(listing,"\t%d: ",lineno);
    printToken(currentToken,tokenString);
  }
  return currentToken;
}


