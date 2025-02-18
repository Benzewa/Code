// vid 6
// print ordered Matrix

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

void FillArrSrc(int ArrSrc[3][3], int Rows, int Cols);
void PrintArrSrc(int ArrSrc[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};
    FillArrSrc(ArrSrc, 3, 3);
    PrintArrSrc(ArrSrc, 3, 3);
}
void FillArrSrc(int ArrSrc[3][3], int Rows, int Cols)
{
    int x = 1;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrSrc[i][j] = x;
            x++;
        }
    }
}
void PrintArrSrc(int ArrSrc[3][3], int Rows, int Cols)
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