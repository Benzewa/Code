// vid 9
// Fill a 3 x 3 Random Matrix then Print the Middle row and Middle col

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void PrintMidRow(int Arr[3][3], int RowNumber, int Cols);
void PrintMidRowAdv(int Arr[3][3], int Rows, int Cols);
void PrintMidCol(int Arr[3][3], int Rows, int ColNum);
void PrintMidColAdv(int Arr[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrOne[3][3] = {0};
    FillArr(ArrOne, 3, 3);
    PrintArr(ArrOne, 3, 3);
    std::cout << "\n";
    PrintMidRow(ArrOne, 1, 3);
    std::cout << "\n";
    PrintMidCol(ArrOne, 3, 1);
    std::cout << "\n";
    PrintMidRowAdv(ArrOne, 3, 3);
    std::cout << "\n";
    PrintMidColAdv(ArrOne, 3, 3);
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
            std::cout << Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
void PrintMidRow(int Arr[3][3], int RowNumber, int Cols)
{
    for (int j = 0; j < Cols; j++)
    {
        std::cout << Arr[RowNumber][j] << " ";
    }
}
void PrintMidRowAdv(int Arr[3][3], int Rows, int Cols)
{
    for (int j = 0; j < Cols; j++)
    {
        std::cout << Arr[Rows / 2][j] << " ";
    }
}
void PrintMidCol(int Arr[3][3], int Rows, int ColNum)
{
    for (int i = 0; i < Rows; i++)
    {
        std::cout << Arr[i][ColNum] << " ";
    }
}
void PrintMidColAdv(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        std::cout << Arr[i][Cols / 2] << " ";
    }
}