/****************************************************/
/* File: tiny.y                                     */
/* The TINY Yacc/Bison specification file           */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/
%{
#define YYPARSER  /* distinguishes Yacc output from o//ther code files */ 

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static TreeNode * savedTree;   
static int yylex(void);
int yyerror(char *);

%}

%token IF ELSE WHILE INT VOID RETURN
%token NUM ID
%token ASSIGN EQ DIF GT LT PLUS MINUS TIMES OVER LET GET LPAREN RPAREN LBRA RBRA LWRE RWRE SEMI COMM
%token ERROR ENDFILE

%% 

program            :   list_declaration
                       {
                       }
                    ;
list_declaration    :   list_declaration declaration
                        {
                        }
                    |   declaration
                        {
                        }
                    ;
declaration         :   var_declaration
                        {
                        }
                    |   fun_declaration
                        {
                        }
                    ;
var_declaration     :   INT ident SEMI
                        {	
                        }
                    |   INT ident LBRA num RBRA SEMI
                        {
                        }
                    ;
fun_declaration     :   INT ident LPAREN params RPAREN compound_decl
                        {
                        }
                    |   VOID ident LPAREN params RPAREN compound_decl
                        {
                        }
                    ;
params              :   param_list
                        {
                        }
                    |   VOID
                        {
						            }
                    ;
param_list          :   param_list COMM param
                        {
                        }
                    |   param
                        {
                        }
                    ;
param               :   INT ident
                        {
                        }
                    |   INT ident LBRA RBRA
                        {
                        }
                    ;
compound_decl       :   LWRE local_declarations statement_list RWRE
                        {
                        }
                    |   LWRE local_declarations RWRE
                        {
                        }
                    |   LWRE statement_list RWRE
                        {
                        }
                    |   LWRE RWRE
                        {
			   			          }
                    ;
local_declarations  :   local_declarations var_declaration
                        {
                        }
                   |    var_declaration
                        {
                        }
                    ;
statement_list      :   statement_list statement
                        {
                        }
                    |   statement
                        {
                        }
                    ;
statement           :   expression_decl
                        {
                        }
                    |   compound_decl
                        {
                        }
                    |   selection_decl
                        {
                        }
                    |   iterator_decl
                        {
                        }
                    |   return_decl
                        {
                        }
                    ;
expression_decl     :   expression SEMI 
                        {
                        }
                    |   SEMI
                        {
						}
                    ;
selection_decl      :   IF LPAREN expression RPAREN statement 
                        {
                        }
                    |   IF LPAREN expression RPAREN statement ELSE statement
                        {
                        }
                    ;
iterator_decl       :   WHILE LPAREN expression RPAREN statement
                        {
                        }
                   ;
return_decl        :   RETURN SEMI
                       {
                       }
                   |   RETURN expression SEMI
                       {
                       }
                   ;
expression         :   var ASSIGN expression
                       {
                       }
                   |   simple_expression
                       {
                       }
                   ;
var                :   ident
                       {
                       }
                   |   ident LBRA expression RBRA
                       {
                       }
                    ;
simple_expression   : sum_expression relational sum_expression
                       {
                       }
                    |  sum_expression
                       {
                       }
                    ;
relational          :  EQ
                       {
                       }
                    |  DIF
                       {                           
                       }
                    |  LT
                       {
                       }
                    |  LET
                       {
                       }
                    |  GT
                       {
                       }
                    |  GET
                       {
                       }
                    ;
sum_expression      :  sum_expression sum term
                       {
                       }
                    |  term
                       {
                       }
                    ;
sum                 :  PLUS
                       {                           
                       }
                    |  MINUS
                       {                            
                       }
                    ;
term                :  term mult factor
                       {
                       }
                   |   factor
                       {
                       }
                    ;
mult                :  TIMES
                       {                            
                       }
                   |   OVER
                       {                            
                       }
                    ;
factor              :  LPAREN expression RPAREN
                       {
                       }
                   |   var
                       {
                       }
                   |   activation
                       {
                       }
                   |   num
                       {
                       }
                    ;
activation          :  ident LPAREN arg_list RPAREN
                       {
                       }
                    |  ident LPAREN RPAREN 
					             {
                       }
                       
                    ;
arg_list            :  arg_list COMM expression
                        {
                        }
                    |   expression
                        {
                        }
                    ;
ident               :   ID
                        {
                        }
                    ;
num                 :   NUM
                        {
            						}
                    ;

%%

int yyerror(char* message){
    fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
    fprintf(listing,"Current token: ");
    printToken(yychar,tokenString);
    Error = TRUE;
    return 0;
}


static int yylex(void){
    return getToken();
}

TreeNode * parse(void){
    yyparse();
    return savedTree;
}