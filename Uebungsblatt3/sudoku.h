#pragma once

#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

#define Gridsize 14
#define ARRAYSIZE 10
#define CHAR 0
#define VALUE 1
#define SEED 5


// Aufgabe - Sudoku Test
int lineTest(const char matrix[Gridsize][Gridsize], int line, int length) {
	int counter = 0; //addieren der einzelnen Feldwerte ==> nur wenn 45 rauskommt, ist die Linie korrekt
	int value = 0;
	for (int i = 0; i <= 8; i++) {
		value = matrix[line][i]; 
		counter = (counter + value);
		printf("Line %i, Field: %i, counter: %i\n",line,i,counter); //debug note
	}
	printf("Tested Line: %i Counter: %i\n",line, counter); //debug note
	if (counter == 45)return 1;
	if (counter != 45)return 0;
}

int columnTest(const char matrix[Gridsize][Gridsize], int column, int length) {
	int counter = 0; //addieren der einzelnen Feldwerte ==> nur wenn 45 rauskommt, ist die Linie korrekt
	for (int i = 0; i <= 8; i++) {
		counter = (counter + matrix[i][column]);
	} 
	printf("Tested column: %i Counter: %i\n", column, counter); //debug note
	if (counter == 45)return 1;
	if (counter != 45)return 0;
}

int subfieldTest(const char matrix[Gridsize][Gridsize], int xsubfield, int ysubfield) { //die Subfelder sind durch niedrigste x und y coordinate festgelegt 
	int counter = 0;
	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 2; y++) {
			counter = (counter + matrix[(xsubfield+x)][(ysubfield+y)]);
		}
	}
	printf("Tested subfield: %i, %i\n", xsubfield, ysubfield); //debug note
	if (counter == 45)return 1;
	if (counter != 45)return 0;
}

bool sudokuTest(const char matrix[Gridsize][Gridsize], int length) {
	int correct = 0;//wenn richtig, dann correct == 27 am Ende 
	for (int k = 0; k <= 8; k++) {
		correct = (correct + lineTest(matrix, k, 9));//Starting with line testing
		correct = (correct + columnTest(matrix, k, 9));//Continuing with column testing

	}	
	printf("Tested all Lines and columns! %i richtig\n", correct); //debug note
	for (int x = 0; x < 7; x=(x+3)) {
		for (int y = 0; y < 7; y=(y+3)) {
			correct = (correct + subfieldTest(matrix,x,y));
		}
	}
	printf("Test complete Checksum: %i \n", correct); //debug note
	if (correct == 27)return true;
	if (correct != 27)return false;
}
