#include "global.h" 



void aufgabe1a(void);
void aufgabe1b(void);
void aufgabe2a(void);
void aufgabe2b(void);
void aufgabe2c(void);
void aufgabe2d(void);


int main(void) {
	//aufgabe1a();
	//aufgabe1b();
	//aufgabe2a();
	aufgabe2b();
	//aufgabe2c();
	//aufgabe2d();
	return 0;
}

void aufgabe1a() {
	char myArray[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	printArray(myArray, 10);
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

void aufgabe2a() {
	printf("%d", myrand(256));
}

void aufgabe2b() {
	int testarray[10];
	randArray(testarray, 10, 256);
}

void aufgabe2c() {

}

void aufgabe2d() {

}