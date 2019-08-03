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
int yyerror(char* message);
void aggScope(TreeNode* t, char* scope);

%}

%token IF ELSE WHILE INT VOID RETURN
%token NUM ID
%token ASSIGN EQ DIF GT LT PLUS MINUS TIMES OVER LET GET LPAREN RPAREN LBRA RBRA LWRE RWRE SEMI COMM
%token ERROR ENDFILE

%% 

program            :   list_declaration
                       {
                          savedTree = $1;
                       }
                    ;
list_declaration    :   list_declaration declaration
                        {
                            YYSTYPE t = $1;
                            if(t != NULL){
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = $2;
                                $$ = $1;
                            }
                            else
                                $$ = $2;
                        }
                    |   declaration
                        {
                           $$ = $1;
                        }
                    ;
declaration         :   var_declaration
                        {
                           $$ = $1;
                        }
                    |   fun_declaration
                        {
                           $$ = $1;
                        }
                    ;
var_declaration     :   INT ident SEMI
                        {	
                        	$$ = newExpNode(TypeK);
                            $$->type = IntegerK;
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = VariableK;
							$2->type = IntegerK;
                        }
                    |   INT ident LBRA num RBRA SEMI
                        {
                        	$$ = newExpNode(TypeK);
                            $$->type = IntegerK;
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = VariableK;
							$2->type = IntegerK; 
                            $2->attr.len = $4->attr.val;
                        }
                    ;
fun_declaration     :   INT ident LPAREN params RPAREN compound_decl
                        {
                        	$$ = newExpNode(TypeK);
                            $$->type = IntegerK;
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
                            $2->child[0] = $4;
                            $2->child[1] = $6;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = FunctionK;
							$2->type = IntegerK;
							$4->type = IntegerK;
							aggScope($2->child[0], $2->attr.name);
							aggScope($2->child[1], $2->attr.name);
                        }
                    |   VOID ident LPAREN params RPAREN compound_decl
                        {
                        	$$ = newExpNode(TypeK);
                            $$->type = VoidK;
                            $$->attr.name = "void";
                            $$->child[0] = $2;
                            $2->child[0] = $4;
                            $2->child[1] = $6;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = FunctionK;
							aggScope($2->child[0], $2->attr.name);
							aggScope($2->child[1], $2->attr.name);
                        }
                    ;
params              :   param_list
                        {
                           $$ = $1;
                        }
                    |   VOID
                        {
						  $$ = newExpNode(TypeK);
           				  $$->attr.name = "void";
						}
                    ;
param_list          :   param_list COMM param
                        {
                           YYSTYPE t = $1;
                           if(t != NULL)
						   {
                              while(t->sibling != NULL)
                                  t = t->sibling;
                              t->sibling = $3;
                              $$ = $1;
                            }
                            else
                              $$ = $3;
                        }
                    |   param
                        {
                            $$ = $1;
                        }
                    ;
param               :   INT ident
                        {
						   	
                           $$ = newExpNode(TypeK);
					       $2->nodekind = StmtK;
                           $2->kind.stmt = VariableK;
                           $$->type = IntegerK;
						   $2->type = IntegerK; 	
                           $$->attr.name = "integer";
                           $$->child[0] = $2;
                        }
                    |   INT ident LBRA RBRA
                        {
							
                            $$ = newExpNode(TypeK);
							$2->nodekind = StmtK;
                            $2->kind.stmt = VariableK;
                            $$->type = IntegerK;
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
						    $2->type = IntegerK;
                        }
                    ;
compound_decl       :   LWRE local_declarations statement_list RWRE
                        {
                            YYSTYPE t = $2;
                            if(t != NULL)
						    {
                               while(t->sibling != NULL)
                                  t = t->sibling;
                                t->sibling = $3;
                                $$ = $2;
                            }
                            else
                               $$ = $3;
                        }
                    |   LWRE local_declarations RWRE
                        {
                            $$ = $2;
                        }
                    |   LWRE statement_list RWRE
                        {
                            $$ = $2;
                        }
                    |   LWRE RWRE
                        {
			   			}
                    ;
local_declarations  :   local_declarations var_declaration
                        {
                            YYSTYPE t = $1;
                            if(t != NULL)
							{
                            	while(t->sibling != NULL)
                                	 t = t->sibling;
                             	t->sibling = $2;
                             	$$ = $1;
                            }
                            else
                               $$ = $2;
                        }
                   |    var_declaration
                        {
                            $$ = $1;
                        }
                    ;
statement_list      :   statement_list statement
                        {
                           YYSTYPE t = $1;
                           if(t != NULL)
						   {
                              while(t->sibling != NULL)
                                   t = t->sibling;
                              t->sibling = $2;
                              $$ = $1;
                           }
                           else
                             $$ = $2;
                        }
                    |   statement
                        {
                           $$ = $1;
                        }
                    ;
statement           :   expression_decl
                        {
                           $$ = $1;
                        }
                    |   compound_decl
                        {
                           $$ = $1;
                        }
                    |   selection_decl
                        {
                           $$ = $1;
                        }
                    |   iterator_decl
                        {
                           $$ = $1;
                        }
                    |   return_decl
                        {
                           $$ = $1;
                        }
                    ;
expression_decl     :   expression SEMI 
                        {
                           $$ = $1;
                        }
                    |   SEMI
                        {
						}
                    ;
selection_decl      :   IF LPAREN expression RPAREN statement 
                        {
                             $$ = newStmtNode(IfK);
                             $$->child[0] = $3;
                             $$->child[1] = $5;
                        }
                    |   IF LPAREN expression RPAREN statement ELSE statement
                        {
							 
                             $$ = newStmtNode(IfK);
                             $$->child[0] = $3;
                             $$->child[1] = $5;
                             $$->child[2] = $7;
                        }
                    ;
iterator_decl       :   WHILE LPAREN expression RPAREN statement
                        {
                             $$ = newStmtNode(WhileK);
                             $$->child[0] = $3;
                             $$->child[1] = $5;
                        }
                   ;
return_decl        :   RETURN SEMI
                       {
                            $$ = newStmtNode(ReturnK);
							$$->type = VoidK;
                       }
                   |   RETURN expression SEMI
                       {
                            $$ = newStmtNode(ReturnK);
                            $$->child[0] = $2;
                       }
                   ;
expression         :   var ASSIGN expression
                       {
                            $$ = newStmtNode(AssignK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                       }
                   |   simple_expression
                       {
                            $$ = $1;
                       }
                   ;
var                :   ident
                       {
                            $$ = $1;
                       }
                   |   ident LBRA expression RBRA
                       {
                            $$ = $1;
                            $$->child[0] = $3;
                            $$->kind.exp = VectorK;
							$$->type = IntegerK;
                       }
                    ;
simple_expression   : sum_expression relational sum_expression
                       {
                            $$ = $2;
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                       }
                    |  sum_expression
                       {
                            $$ = $1;
                       }
                    ;
relational          :  EQ
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = EQ;  
							$$->type = BooleanK;                          
                       }
                    |  DIF
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = DIF;
							$$->type = BooleanK;                            
                       }
                    |  LT
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = LT;                            
							$$->type = BooleanK;
                       }
                    |  LET
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = LET;                            
							$$->type = BooleanK;
                       }
                    |  GT
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = GT;                            
							$$->type = BooleanK;
                       }
                    |  GET
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = GET;                            
							$$->type = BooleanK;
                       }
                    ;
sum_expression      :  sum_expression sum term
                       {
                            $$ = $2;
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                       }
                    |  term
                       {
                            $$ = $1;
                       }
                    ;
sum                 :  PLUS
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = PLUS;                            
                       }
                    |  MINUS
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = MINUS;                            
                       }
                    ;
term                :  term mult factor
                       {
                            $$ = $2;
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                       }
                   |   factor
                       {
                            $$ = $1;
                       }
                    ;
mult                :  TIMES
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = TIMES;                            
                       }
                   |   OVER
                       {
                            $$ = newExpNode(OpK);
                            $$->attr.op = OVER;                            
                       }
                    ;
factor              :  LPAREN expression RPAREN
                       {
                            $$ = $2;
                       }
                   |   var
                       {
                            $$ = $1;
                       }
                   |   activation
                       {
                            $$ = $1;
                       }
                   |   num
                       {
                            $$ = $1;
                       }
                    ;
activation          :  ident LPAREN arg_list RPAREN
                       {
                            $$ = $1;
                            $$->child[0] = $3;
                            $$->nodekind = StmtK;
                            $$->kind.stmt = CallK;
                       }
                    |  ident LPAREN RPAREN 
					   {
                            $$ = $1;
                            $$->nodekind = StmtK;
                            $$->kind.stmt = CallK;
                       }
                       
                    ;
arg_list            :  arg_list COMM expression
                       {
                            YYSTYPE t = $1;
                             if(t != NULL)
							 {
                                while(t->sibling != NULL)
                                   t = t->sibling;
                                 t->sibling = $3;
                                 $$ = $1;
                             }
                             else
                                 $$ = $3;
                        }
                    |   expression
                        {
                             $$ = $1;
                        }
                    ;
ident               :   ID
                        {
                             $$ = newExpNode(IdK);
                             $$->attr.name = copyString(tokenString);
                        }
                    ;
num                 :   NUM
                        {
                             $$ = newExpNode(ConstK);
                             $$->attr.val = atoi(tokenString);
							 $$->type = IntegerK;
						}
                    ;

%%

int yyerror(char* message){
    fprintf(listing, "ERRO SINTATICO: %s LINHA %d", tokenString, lineno);
    //fprintf(listing, "Current token: ");
    //printToken(yychar, tokenString);
    fprintf(listing, "LINHA: %d", lineno);
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