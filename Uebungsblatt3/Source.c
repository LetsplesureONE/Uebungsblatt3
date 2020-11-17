#include "global.h" 
#include "sudoku.h"



void aufgabe1a(void);
void aufgabe1b(void);
void aufgabe2a(void);
void aufgabe2b(void);
void aufgabe2c(void);
void aufgabe2d(void);
void aufgabe2e(void);
void aufgabe3a(void);
void aufgabe3b(void);
void aufgabe3c(void);
void aufgabe3d(void);
void aufgabe3e(void);
void aufgabe3f(void);
void aufgabe3i(void);
void aufgabe4(void);

int main(void) {
	//aufgabe1a();
	//aufgabe1b();
	//aufgabe2a();
	//aufgabe2b();
	//aufgabe2c();
	//aufgabe2d();
	//aufgabe2e();
	//aufgabe3a();
	//aufgabe3b();
	//aufgabe3c();
	//aufgabe3d();
	//aufgabe3e();
	//aufgabe3f();
	//aufgabe3i();
	aufgabe4();
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
	int testarray[10];
	randArray(testarray, 10, 256);


}

void aufgabe2d() {

}

void aufgabe2e() {
	int occurrence[256];
	char loremipsum[] = "Loremipsumdolorsitamet,consetetursadipscingelitr,seddiamnonumyeirmodtemporinviduntutlaboreetdoloremagnaaliquyamerat,seddiamvoluptua.";
	languageAnalyzer(loremipsum, 255, occurrence);
	for (int i = 0; i < 256; i++) {
		printf("Char#%c: %i\n",i, occurrence[i]);
	}
}

void aufgabe3a(void) {
	int xarray[20];
	setArray(xarray, 15, 3);
}

void aufgabe3b(void) {
	char bambus[25];
	readInputAsString(bambus, 25);
}

void aufgabe3c(void) {
	char myArray[ARRAYSIZE] = { 'a', 'b', 'A', 'A', 'Z' };
	toUpperCase(myArray, 5);
	countUpperCase(myArray, 5);
}

void aufgabe3d(void) {
	char myArray[ARRAYSIZE] = { 'a', 'b', 'A', 'A', 'Z' }; 
	countUpperCase(myArray, 5);
}

void aufgabe3e(void) {
	char myArray[ARRAYSIZE] = { 'a', 'b', 'A', 'A', 'Z' };
	toLowerCase(myArray, 5);
	countLowerCase(myArray, 5);
}

void aufgabe3f(void) {
	char myArray[ARRAYSIZE] = { 'a', 'b', 'A', 'A', 'Z' };
	countLowerCase(myArray, 5);
}

void aufgabe3i(void) {
	char myArray[ARRAYSIZE] = { 'Z', 'w', 'e', 'i', '!' }; 
	caesarChiffre(myArray, 5, 2);
}

void aufgabe4() {
	int sudokutrue[9][9] = { {5,3,4,6,7,8,9,1,2}, {6,7,2,1,9,5,3,4,8}, {1,9,8,3,4,2,5,6,7}, {8,5,9,7,6,1,4,2,3}, {4,2,6,8,5,3,7,9,1}, {7,1,3,9,2,4,8,5,6}, {9,6,1,5,3,7,2,8,4}, {2,8,7,4,1,9,6,3,5}, {3,4,5,2,8,6,1,7,9} };
	bool correct = sudokuTest(sudokutrue,9);
	if (correct)printf("Jay deine Lösung erfüllt die Regeln\n");
	if (!correct)printf("Leider falsch versuche es erneut\n");
}