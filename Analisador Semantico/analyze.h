/****************************************************/
/* File: analyze.h                                  */
/* Semantic analyzer interface for Cminus compiler  */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/* Compiladores 2018.1/Luiz Eduardo Galvao          */
/* Willian Dihanster Gomes de Oliveira RA 112269    */
/****************************************************/

#ifndef _ANALYZE_H_
#define _ANALYZE_H_

/* Function buildSymtab constructs the symbol 
 * table by preorder traversal of the syntax tree
 */
void buildSymtab(TreeNode *);

/* Procedure typeCheck performs type checking 
 * by a postorder syntax tree traversal
 */
void typeCheck(TreeNode *);

#endif
