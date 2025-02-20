// vid 8
// Multiply 2 matrices and save the product in a New Array

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void FillProductArr(int ArrOne[3][3], int ArrTwo[3][3], int ArrPro[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrOne[3][3] = {0};
    int ArrTwo[3][3] = {0};
    int ArrPro[3][3] = {0};

    // Fill Arrays and Fill Product Array
    FillArr(ArrOne, 3, 3);
    FillArr(ArrTwo, 3, 3);
    FillProductArr(ArrOne, ArrTwo, ArrPro, 3, 3);

    // Print Arrays
    printf("Array One : \n");
    PrintArr(ArrOne, 3, 3);
    printf("Array Two : \n");
    PrintArr(ArrTwo, 3, 3);
    printf("Array Product : \n");
    PrintArr(ArrPro, 3, 3);
}
int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}
void FillArr(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr[i][j] = Random(0, 5);
        }
    }
}
void PrintArr(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf("%02d ", Arr[i][j]);
        }
        printf("\n");
    }
}
void FillProductArr(int ArrOne[3][3], int ArrTwo[3][3], int ArrPro[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrPro[i][j] = (ArrOne[i][j] * ArrTwo[i][j]);
        }
    }
}