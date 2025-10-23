#include <iostream>
#include <array>
using namespace std;
// const int MAXROWS = 100; (otra opción)
#define MAXNUMBEROFROWS 100
#define MAXNUMBEROFCOLUMNS 100

void fillArray(array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);
void printArray(array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);
int findMax(array<array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);