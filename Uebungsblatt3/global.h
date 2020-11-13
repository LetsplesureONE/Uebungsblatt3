#pragma once
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

//Makros FTW
#define MATRIXSIZE 200
#define ARRAYSIZE 10
#define CHAR 0
#define VALUE 1
#define SEED 5


/*void gettime() { //not my own ;)
	time_t rawtime;
	struct tm* timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
 }*/

/* Aufgabe – Printausgaben */
void printArray(const char* array, int length) { 
	for (int i = 0; (i+1) < length; i++) {
		printf("%d, ", array[i]);
	}
	printf("%d", array[length-1]);
}

void printMatrix(const char matrix[MATRIXSIZE][MATRIXSIZE], int length, int type) {
	for (int i = 0; (i) < length; i++){
		for (int j = 0; (j) < length; j++) {
			if (type) {
				printf("%d\t", matrix[i][j]);
			}
			else {
				printf("%c", matrix[i][j]);
			}
		}
		printf("\n");
	}
}

/* Aufgabe – Zufallszahlen */
unsigned char myrand(int max) { 
	srand(42);
	char c = (rand()%max);
	return c;
}

void randArray(char* array, int length, int max) { 
	for (int i = 0; (i + 1) < length; i++) {
		array[i] = myrand(max);
	}
}

void randMatrix(char matrix[MATRIXSIZE][MATRIXSIZE], int length, int max) { 
	for (int i = 0; (i) < length; i++) {
		for (int j = 0; (j) < length; j++) {
			matrix[i][j] = myrand(max);
		}
	}
}

void countArray(const char* array, int length, char occurrence[256]) {
	for (int i = 0; (i + 1) < length; i++) {
		occurrence[array[i]]++;
	}
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