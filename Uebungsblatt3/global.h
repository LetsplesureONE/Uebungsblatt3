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

int isLowerCase(char* array, int index);
int isUpperCase(char* array, int index);


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

void printArrayOfChars(const char* array, int length) {
	for (int i = 0; (i) < length; i++) {
		printf("%c", array[i]);
	}
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
	//srand(32);
	char c = (rand()%max);
	return c;
}

void randArray(char* array, int length, int max) { 
	for (int i = 0; i <= length; i++) {
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
	int c = 0;
	for (int i = 0; (i + 1) < length; i++) {
		c = (int)array[i];
		occurrence[c]++;
	}
	for (int i = 0; i < length; i++)
	{
		printf("Die Zahl %i kommt %i mal vor\n", i + 1, occurrence[i]);
	}
}

void languageAnalyzer(const char* array, int length, int occurrence[256]) {
	char c = 0;
	for (int i = 0; i < length; i++) {
		c = 0;
		int c = array[i];
		if (array[i]<=96) {
			occurrence[c]++;
			printf("%c",c); //??? Ausgabe der falschen chars
		}
		else {
			if (array[i] >= 123) {
				occurrence[(c+96)]++;
			}
			else {
				occurrence[(c-32)]++;
			}
		}
	}
}

/* Aufgabe - Wortspiel */
void setArray(char* array, int length, char value) {
	for (int i = 0; i < length;i++) {
		array[i] = value;
		//printf("array[%i]= %i\n", i, array[i]); //debug
	}
}

void readInputAsString(char* array, int length) { 
	setArray(array, 25, 0);
	printf("Please Enter a String: ");
	//scanf_s("%[^\n]", &array);				//??? Übergabe in array runtime error
	gets(array);
	printArrayOfChars(array, length);
}

void toUpperCase(char* array, int length) {
	for (int i = 0; i < length; i++) {
		if (isLowerCase(array,i)) {
			array[i] = array[i] - 32;
		}
	}
}

void countUpperCase(char* array, int length) { 
	int counter = 0;
	for (int i = 0; i < length; i++) {
		counter = counter + isUpperCase(array,i);
	}
	printf("Die ersten %d Stellen enthalten %d Grossbuchstaben.", length, counter);
}

void toLowerCase(char* array, int length){ 
	for (int i = 0; i < length; i++) {
		if (isUpperCase(array, i)) {
			array[i] = array[i] + 32;
		}
	}
}

void countLowerCase(char* array, int length){ 
	int counter = 0;
	for (int i = 0; i < length; i++) {
		counter = counter + isLowerCase(array, i);
	}
	printf("Die ersten %d Stellen enthalten %d Kleinbuchstaben.", length, counter);
}

int isUpperCase(char* array, int index){ 
	if (array[index] >= 65 && array[index] <= 90) {
		return 1;
	}
	return 0;
}

int isLowerCase(char* array, int index){ 
	if (array[index] >= 97 && array[index] <= 122) {
		return 1;
	}
	return 0;
}

void caesarChiffre(const char* array, int length, int shift){ 
	printf("Orginaltext: ");
	printArrayOfChars(array, length);
	printf("\nChiffre:     ");
	char c = 0;
	for (int i = 0; i < length; i++){
		c = array[i];
		if (isUpperCase(array, i)) {
			c = array[i] + shift;
			if (!(c >= 65 && c <= 90)) {
				c = c - 26;
			}
		}else{
			if (isLowerCase(array, i)) {
				c = array[i] + shift;
				if (!(c >= 97 && c <= 122)) {
					c = c - 26;
				}
			}
		}
		printf("%c",c);
	}
	printf("\n");
}

