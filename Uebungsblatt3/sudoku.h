#pragma once

#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

#define Gridsize 9
#define ARRAYSIZE 50
#define CHAR 0
#define VALUE 1
#define SEED 5


// Aufgabe - Sudoku Test
int lineTest(const char matrix[Gridsize][Gridsize], int line, int length) {
	
	char doppel[ARRAYSIZE];
	setArray(doppel, length, 0);
	int top = 0;
	int dop = 0;

	for (int i = 0; i < length; i++) {
		if (matrix[line][i] <= length) {
			doppel[(matrix[line][i]-1)]++;
			//printf("%i", (matrix[line][i]));//debug
		}
		else {
			top = 1;
		}
	}
	//printArray(doppel, length);//debug
	for (int j = 0; j < length; j++) {
		if (doppel[j] > 1)
		{
			dop++;
		}
		else {

		}
	}

	if (dop > 0 || top > 0) {
		return 0;
	}
	return 1;
}

int columnTest(const char matrix[Gridsize][Gridsize], int column, int length) {
	
	char doppel[ARRAYSIZE];
	setArray(doppel, length, 0);
	int top = 0;
	int dop = 0;

	for (int i = 0; i < length; i++) {
		//if (matrix[i][column] != '-1') {
			if (matrix[i][column] <= length) {
				doppel[matrix[i][column]-1]++;
				//printf("%i", (matrix[i][column]));//debug
			}
			else {
				top = 1;
			}
		
	}
	//printArray(doppel, length);//debug
	for (int j = 0; j < length; j++) {
		if (doppel[j] > 1){
			dop++;
		}
	}
	if (dop > 0 || top > 0) {
		return 0;
	}
	return 1;
}

int subfieldTest(const char matrix[Gridsize][Gridsize],int length, int xsubfield, int ysubfield) { //die Subfelder sind durch niedrigste x und y coordinate festgelegt 
	char doppel[ARRAYSIZE];
	setArray(doppel, length, 0);
	int top = 0;
	int dop = 0;

	for (int i = 0; i < (length/3); i++) {
		for (int k = 0; k < (length / 3); k++)
		if (matrix[i+xsubfield][k+ysubfield] <= length) {
			doppel[(matrix[i + xsubfield][k + ysubfield] - 1)]++;
			//printf("%i", (matrix[i + xsubfield][k + ysubfield]));//debug
		}
		else {
			top = 1;
		}
	}
	//printf("\n");//debug
	//printArray(doppel, length);//debug
	for (int j = 0; j < length; j++) {
		if (doppel[j] > 1)
		{
			dop++;
		}
		else {

		}
	}

	if (dop > 0 || top > 0) {
		return 0;
	}
	return 1;

}

bool sudokuTest(const char matrix[Gridsize][Gridsize], int length) {
	int correct = 0;//wenn richtig, dann correct == 27 am Ende 
	for (int k = 0; k <= 8; k++) {
		correct = (correct + lineTest(matrix, k, 9));//Starting with line testing
		correct = (correct + columnTest(matrix, k, 9));//Continuing with column testing
		printf("Tested line and column %i, %i correct\n",k, correct);

	}	
	printf("Tested all Lines and columns! %i richtig\n", correct); //debug note
	for (int x = 0; x < 7; x=(x+3)) {
		for (int y = 0; y < 7; y=(y+3)) {
			correct = (correct + subfieldTest(matrix,length,x,y));
		}
	}
	printf("Test complete Checksum: %i \n", correct); //debug note
	if (correct == 27)return true;
	if (correct != 27)return false;
}
