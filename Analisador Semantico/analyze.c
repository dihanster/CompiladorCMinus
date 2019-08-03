/****************************************************/
/* File: analyze.c                                  */
/* Semantic analyzer implementation                 */
/* for the Cminus compiler                          */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/* Compiladores 2018.1/Luiz Eduardo Galvao          */
/* Willian Dihanster Gomes de Oliveira RA 112269    */
/****************************************************/

#include "globals.h"
#include "symtab.h"
#include "analyze.h"
#include "util.h"
#include <string.h>
static void typeError(TreeNode * t, char * message);

/* counter for variable memory locations */
static int location = 0;

int main_found = 0;

/*Insert the Input/Output functions*/
static void insertIOFunction(void){ 
  TreeNode *func;

  func = newStmtNode(FunctionK);
  func->attr.name = "input";
  st_insert("input", -1, location++, "global", "function", "integer");

  func = newStmtNode(FunctionK);
  func->attr.name = "output";

  st_insert("output", -1, location++, "global", "function", "void");
}

/*Check if exists a main functon*/
static void checkMainFunction(){
  if(main_found == 0){
      printf("Main function was not declared");
      Error = TRUE; 
   }
}

/* Procedure traverse is a generic recursive 
 * syntax tree traversal routine:
 * it applies preProc in preorder and postProc 
 * in postorder to tree pointed to by t
 */
static void traverse( TreeNode * t,
               void (* preProc) (TreeNode *),
               void (* postProc) (TreeNode *) ){ 

  if (t != NULL){ 
    preProc(t);
      { 
        int i;
        for (i = 0; i < MAXCHILDREN; i++)
          traverse(t->child[i], preProc, postProc);
      }
    postProc(t);
    traverse(t->sibling, preProc, postProc);
    }
}

/* nullProc is a do-nothing procedure to 
 * generate preorder-only or postorder-only
 * traversals from traverse
 */
static void nullProc(TreeNode * t){
  if (t == NULL) 
    return;
  else 
    return;
}

/* Procedure insertNode inserts 
 * identifiers stored in t into 
 * the symbol table 
 */
static void insertNode(TreeNode * t){
  switch (t->nodekind){
    case StmtK:
      switch (t->kind.stmt){
        case FunctionK:
          if (st_lookup(t->attr.name, t->attr.scope) == -1 && st_lookup(t->attr.name, "global") == -1){
            if(t->type == IntegerK)
              st_insert(t->attr.name, t->lineno, location++, t->attr.scope, "function", "integer");
            else
              st_insert(t->attr.name, t->lineno, location++, t->attr.scope, "function", "void");
            if (strcmp(t->attr.name, "main") == 0)
              main_found = 1;
          }
          else 
            typeError(t, "Invalid. Function already declared.");
          break;
        case VariableK:
          if (st_lookup(t->attr.name, t->attr.scope) == -1) //&& st_lookup(t->attr.name, "global") == -1)
              st_insert(t->attr.name, t->lineno, location++, t->attr.scope, "variable", "integer");          
          else 
            typeError(t, "Invalid. Already declared.");
          break;
        case CallK:
          if (st_lookup(t->attr.name, t->attr.scope) == -1 && st_lookup(t->attr.name, "global") == -1)
            typeError(t, "Invalid Call. Function was not declared."); 
          else 
            st_insert(t->attr.name, t->lineno, location++, t->attr.scope, "call", st_lookup_type(t->attr.name, "global"));
        case ReturnK:
          break;
        default:
          break;
      }
      break;
      case ExpK:
      switch (t->kind.exp){ 
        case IdK:
          if (st_lookup(t->attr.name, t->attr.scope) == -1 && st_lookup(t->attr.name, "global") == -1)
            typeError(t,"It was not declared");
          else
            st_insert(t->attr.name, t->lineno, 0, t->attr.scope, "variable", "integer");  
          break;
        case VectorK:
          if (st_lookup(t->attr.name, t->attr.scope) == -1 && st_lookup(t->attr.name, "global") == -1)
            typeError(t, "It was not declared");
          else
            st_insert(t->attr.name, t->lineno, 0, t->attr.scope, "vector", "integer");  
            break;
        case VectorIdK:
          if (st_lookup(t->attr.name, t->attr.scope) == -1 && st_lookup(t->attr.name, "global") == -1)
            typeError(t, "It was not declared");
          else
            st_insert(t->attr.name, t->lineno, 0, t->attr.scope, "vector index", "integer");  
        case TypeK:
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
}

/* Function buildSymtab constructs the symbol 
 * table by preorder traversal of the syntax tree
 */
void buildSymtab(TreeNode * syntaxTree){
  
  insertIOFunction();

  traverse(syntaxTree, insertNode, nullProc);

  checkMainFunction();

  if (TraceAnalyze){
    fprintf(listing, "\nSymbol table:\n\n");
    printSymTab(listing);
  }

}

static void typeError(TreeNode * t, char * message){
  fprintf(listing, "\nSEMANTIC ERROR: %s LINE: %d\n", message, t->lineno);
  Error = TRUE;
}

/* Procedure checkNode performs
 * type checking at a single tree node
 */
static void checkNode(TreeNode * t){
  switch (t->nodekind){ 
   case ExpK:
      switch (t->kind.exp){ 
        case OpK:
          break;
        default:
          break;
      }
      break;
    case StmtK:
      switch (t->kind.stmt){ 
        case AssignK:
          if(t->child[1]->kind.stmt == CallK){
            if(strcmp(st_lookup_type(t->child[1]->attr.name, t->child[1]->attr.scope), "void") == 0)
              typeError(t->child[1], "Assignment of void return");
          }       
      break;      
          break;
        default:
          break;
      }
    break;
    default:
      break;
  }
}

/* Procedure typeCheck performs type checking 
 * by a postorder syntax tree traversal
 */
void typeCheck(TreeNode * syntaxTree){
  traverse(syntaxTree, nullProc, checkNode);
}
