// vid 10
// program that calculates Sum of matrix Elements

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int ArrOne[3][3], int Rows, int Cols);
void PrintArr(int ArrOne[3][3], int Rows, int Cols);
int SumOfArr(int ArrOne[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3] = {0}, Sum = 0;
    FillArr(Arr, 3, 3);
    PrintArr(Arr, 3, 3);
    Sum = SumOfArr(Arr, 3, 3);
    std::cout << "The Sum of The Matrix is : " << Sum << "\n";
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
            ArrOne[i][j] = Random(1, 2);
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
        printf("\n");
    }
}
int SumOfArr(int ArrOne[3][3], int Rows, int Cols)
{
    int Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Sum += ArrOne[i][j];
        }
    }
    return (Sum);
}