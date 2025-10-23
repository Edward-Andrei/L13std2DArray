#include "Std2DArray.h"

void fillArray(array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		return;
	}

	int startValue = 1;
	for (int i=0; i<rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = startValue++;
			// startValue++; (Si no lo ponemos arriba el startValue++)
		}
	}
}
void printArray(array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		return;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int findMax(array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {

	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		return -1;
	}

	int aux = arr[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (arr[i][j] > aux) {
				aux = arr[i][j];
			}
		}
	}

	return aux;
}