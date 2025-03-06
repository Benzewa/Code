// 3 x 3 Ordered Matrix
// Fill Matrix 3 x 3 with ordered numbers

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

void PrintArr(int Arr[3][3], int Rows, int Cols);
void FillArr(int Arr[3][3], int Rows, int Cols);

int main()
{
    // int ArrSrc[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ArrSrc[3][3] = {0};
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    return (0);
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