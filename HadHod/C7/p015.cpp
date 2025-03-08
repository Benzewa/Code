// vid 7
// Transpose of a Matrix

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void PrintTransposeArray(int Arr[3][3], int Rows, int Cols);

int main()
{
    int ArrSrc[3][3] = {0};
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    std::cout << "-------------\n";
    PrintTransposeArray(ArrSrc, 3, 3);
}
void FillArr(int Arr[3][3], int Rows, int Cols)
{
    int Num = 1;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr[i][j] = Num;
            Num += 1;
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
void PrintTransposeArray(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            std::cout << std::setw(3) << Arr[j][i] << " ";
        }
        std::cout << "\n";
    }
}