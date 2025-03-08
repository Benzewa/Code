// vid 8
// program that multiplies Matrix 1 and Matrix 2 then store the product in Matrix3

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void ProductArray(int ArrOne[3][3], int ArrTwo[3][3], int ArrProd[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrOne[3][3] = {0};
    int ArrTwo[3][3] = {0};
    int ArrProduct[3][3] = {0};

    FillArr(ArrOne, 3, 3);
    printf("Array One :\n");
    PrintArr(ArrOne, 3, 3);

    FillArr(ArrTwo, 3, 3);
    printf("Array Two :\n");
    PrintArr(ArrTwo, 3, 3);

    ProductArray(ArrOne, ArrTwo, ArrProduct, 3, 3);
    printf("Array Three :\n");
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
            std::cout << std::setw(3) << Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
void ProductArray(int ArrOne[3][3], int ArrTwo[3][3], int ArrProd[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrProd[i][j] = (ArrOne[i][j] * ArrTwo[i][j]);
        }
    }
}