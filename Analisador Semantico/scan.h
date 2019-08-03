/****************************************************/
/* File: scan.h                                     */
/* The scanner interface for the Cminus compiler    */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/* Compiladores 2018.1/Luiz Eduardo Galvao          */
/* Willian Dihanster Gomes de Oliveira RA 112269    */
/****************************************************/

#ifndef _SCAN_H_
#define _SCAN_H_

/* MAXTOKENLEN is the maximum size of a token */
#define MAXTOKENLEN 40

/* tokenString array stores the lexeme of each token */
extern char tokenString[MAXTOKENLEN+1];

/* function getToken returns the 
 * next token in source file
 */
TokenType getToken(void);

#endif
