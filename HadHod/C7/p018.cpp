// vid 9
// program that prints Middle row and col of a matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int ArrOne[3][3], int Rows, int Cols);
void PrintArr(int ArrOne[3][3], int Rows, int Cols);
void PrintMidRow(int ArrOne[3][3], int Rows, int Cols);
void PrintMidCol(int ArrOne[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    PrintMidRow(ArrSrc, 3, 3);
    PrintMidCol(ArrSrc, 3, 3);
}
int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}
void FillArr(int ArrOne[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrOne[i][j] = Random(0, 5);
        }
    }
}
void PrintArr(int ArrOne[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf("%02d ", ArrOne[i][j]);
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
void PrintMidRow(int ArrOne[3][3], int Rows, int Cols)
{
    printf("MidRow : \n");
    for (int j = 0; j < Cols; j++)
    {
        printf("%02d ", ArrOne[Rows / 2][j]);
    }
    std::cout << "\n";
}
void PrintMidCol(int ArrOne[3][3], int Rows, int Cols)
{
    printf("MidCol : \n");
    for (int i = 0; i < Rows; i++)
    {
        printf("%02d\n", ArrOne[i][Cols / 2]);
    }
    std::cout << "\n";
}
