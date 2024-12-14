// vid 4
// Print Sum of Cols

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int Random(int From, int To);
void FillArr(int Arr[3][3], int Row, int Col);
void PrintArr(int Arr[3][3], int Row, int Col);
void FillSumArr(int ArrSrc[3][3], int Row, int Col);
int ColSum(int Arr[3][3], int Row, int ColNum);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};

    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);

    FillSumArr(ArrSrc, 3, 3);
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Arr[i][j] = Random(1, 5);
        }
    }
}
void PrintArr(int Arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << setw(3) << Arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void FillSumArr(int ArrSrc[3][3], int Row, int Col)
{
    for (int j = 0; j < Col; j++)
    {
        cout << setw(7) << ColSum(ArrSrc, Row, j) << "\n";
    }
}
int ColSum(int Arr[3][3], int Row, int ColNum)
{
    int Sum = 0;
    for (int i = 0; i < Row; i++)
    {
        Sum += Arr[i][ColNum];
    }
    return Sum;
}