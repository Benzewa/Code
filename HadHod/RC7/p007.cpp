// vid 7
// Transpose of a Matrix

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

void FillSrcArr(int ArrSrc[3][3], int Rows, int Cols);
void PrintArr(int ArrSrc[3][3], int Rows, int Cols);
void FillDesArr(int ArrSrc[3][3], int ArrDes[3][3], int Rows, int Cols);

int main()
{
    int ArrSrc[3][3] = {0};
    int ArrDes[3][3] = {0};
    FillSrcArr(ArrSrc, 3, 3);
    std::cout << "\n";
    PrintArr(ArrSrc, 3, 3);
    std::cout << "\n";
    FillDesArr(ArrSrc, ArrDes, 3, 3);
    PrintArr(ArrDes, 3, 3);
}
void FillSrcArr(int ArrSrc[3][3], int Rows, int Cols)
{
    int x = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrSrc[i][j] = ++x;
        }
    }
}
void PrintArr(int ArrSrc[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            std::cout << std::setw(3) << ArrSrc[i][j] << " ";
        }
        std::cout << "\n";
    }
}
void FillDesArr(int ArrSrc[3][3], int ArrDes[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrDes[i][j] = ArrSrc[j][i];
        }
    }
}