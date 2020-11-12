#pragma once
#include <stdio.h> 
#include <stdlib.h>

//Makros FTW
#define MATRIXSIZE 10
#define ARRAYSIZE 200
#define CHAR 0
#define VALUE 1
#define SEED 5

/* Aufgabe – Printausgaben */
void printArray(const char* array, int length) { 
	/* IHR CODE */ 
}

void printMatrix(const char matrix[MATRIXSIZE][MATRIXSIZE], int length, int type) {
	/* IHR CODE */
}

/* Aufgabe – Zufallszahlen */
unsigned char myRand(int max) { 
	/* IHR CODE */ 
}

void randArray(char* array, int length, int max) { 
	/* IHR CODE */
}

void randMatrix(char matrix[MATRIXSIZE][MATRIXSIZE], int length, int max) { 
	/* IHR CODE */ 
}

void countArray(const char* array, int length, char occurrence[256]) {
	/* IHR CODE */
}

void languageAnalyzer(const char* array, int length, int occurrence[256]) {
	/* IHR CODE */ 
}

/* Aufgabe - Wortspiel */
void setArray(char* array, int length, char value) {
	/* IHR CODE */ 
}

void readInputAsString(char* array, int length) { 
	/* IHR CODE */ 
}

void toUpperCase(char* array, int length) { 
	/* IHR CODE */ 
}

void countUpperCase(char* array, int length) { 
	/* IHR CODE */ 
}

void toLowerCase(char* array, int length){ 
	/* IHR CODE */ 
}

void countLowerCase(char* array, int length){ 
	/* IHR CODE */ 
}

char isUpperCase(char* array, int index){ 
	/* IHR CODE */ 
}

char isLowerCase(char* array, int index){ 
	/* IHR CODE */ 
}

void caesarChiffre(const char* array, int length, int shift){ 
	/* IHR CODE */ 
}

/* Aufgabe - ASCII Art – Bilder drehen */
void rotateMatrixRight(char matrix[MATRIXSIZE][MATRIXSIZE], int length){ 
	/* IHR CODE */ 
}

void rotateMatrixLeft(char matrix[MATRIXSIZE][MATRIXSIZE], int length){ 
	/* IHR CODE */ 
}

// Aufgabe - Sudoku Test
char lineTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int line, int length){
	/* IHR CODE */
}
char columnTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int column, int length){ 
	/* IHR CODE */
}

char sudokuTest(const char matrix[MATRIXSIZE][MATRIXSIZE], int length){ 
	/* IHR CODE */
}