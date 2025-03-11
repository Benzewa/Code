// vid 19
// program that Prints Min/Max Numbers in the Matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));

    int Arr[3][3] = {0};
    FillArr(Arr, 3, 3);
    PrintArr(Arr, 3, 3);
}

int Random(int From, int To)
{
    return
}
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);