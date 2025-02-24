// vid 15
// Program that counts a number in a matrix

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
int CountMatrixElements(int Arr[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    std::cout << std::setw(3) << "Number of Matrix Elements : ";
    std::cout << CountMatrixElements(ArrSrc, 3, 3) << "\n";
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
int CountMatrixElements(int Arr[3][3], int Rows, int Cols)
{
    int Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Counter++;
        }
    }
    return (Counter);
}