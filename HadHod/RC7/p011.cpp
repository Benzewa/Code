// vid 9
// Fill a 3 x 3 Random Matrix then Print the Middle row and Middle col

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void PrintMidRow(int Arr[3][3], int RowNumber, int Cols);
void PrintMidCol(int Arr[3][3], int Rows, int ColNumber);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    std::cout << "\n";
    PrintMidRow(ArrSrc, 1, 3);
    std::cout << "\n";
    PrintMidCol(ArrSrc, 3, 1);
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
void PrintMidRow(int Arr[3][3], int RowNumber, int Cols)
{
    for (int j = 0; j < Cols; j++)
    {
        printf("%02d ", Arr[RowNumber][j]);
    }
}
void PrintMidCol(int Arr[3][3], int Rows, int ColNumber)
{
    for (int i = 0; i < Rows; i++)
    {
        printf("%02d ", Arr[i][ColNumber]);
    }
}