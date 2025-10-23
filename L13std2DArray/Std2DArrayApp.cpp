#include "Std2DArray.h"

int main() {
	array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> array;
	int rows, columns;
	cout << "Enter the number of rows: ";
	cin >> rows;

	cout << "\nEnter the number of colums: ";
	cin >> columns;
	cout << endl;

	fillArray(array, rows, columns);
	printArray(array, rows, columns);
	return 0;
}