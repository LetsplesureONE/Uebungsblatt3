#include "global.h" 



void aufgabe1a(void);
void aufgabe1b(void);


int main(void) {
	//aufgabe1a();
	aufgabe1b();
	return 0;
}

void aufgabe1a() {
	char myArray[ARRAYSIZE] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	printArray(myArray, ARRAYSIZE);
}

void aufgabe1b(void) {
	char myMatrix1[MATRIXSIZE][MATRIXSIZE] = { { 0,1,2 },{ 3,4,5 },{ 6,7,8 } };
	char myMatrix2[MATRIXSIZE][MATRIXSIZE] = { { " "},
	{ "   *      "},
	{ "   ***    "},
	{ "********  "},
	{ "********* "},
	{ "********  "},
	{ "   ***    "},
	{ "   *      "},
	{ "          "} };
	printMatrix(myMatrix1, 3, VALUE);
	printMatrix(myMatrix2, 10, CHAR);
}