// vid 8
// Multiply 2 matrices and save the product in a New Array

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void FillProductArr(int ArrOne[3][3], int ArrTwo[3][3], int ArrProduct[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrOne[3][3];
    int ArrTwo[3][3];
    int ArrProduct[3][3];
    FillArr(ArrOne, 3, 3);
    FillArr(ArrTwo, 3, 3);
    std::cout << std::setw(2) << "Array One\n";
    PrintArr(ArrOne, 3, 3);
    std::cout << std::setw(2) << "Array Two\n";
    PrintArr(ArrTwo, 3, 3);
    FillProductArr(ArrOne, ArrTwo, ArrProduct, 3, 3);
    std::cout << std::setw(2) << "Array Pro\n";
    PrintArr(ArrProduct, 3, 3);
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
            Arr[i][j] = Random(1, 5);
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
            // std::cout << std::setw(3) << Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
void FillProductArr(int ArrOne[3][3], int ArrTwo[3][3], int ArrProduct[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrProduct[i][j] = ArrOne[i][j] * ArrTwo[i][j];
        }
    }
}