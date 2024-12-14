// Store Sum of Each Row in an Array
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int Random(int From, int To);
void FillArr(int Arr[3][3], int Row, int Col);
void PrintArr(int Arr[3][3], int Row, int Col);
void FillSumArr(int Arr[3][3], int Row, int Col, int ArrSum[3]);
int RowSum(int Arr[3][3], int RowNumber, int Col);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {};
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    int SumArr[3] = {};
    FillSumArr(ArrSrc, 3, 3, SumArr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << setw(5) << SumArr[i] << " ";
        }
        cout << "\n";
    }
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
            Arr[i][j] = Random(10, 99);
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
void FillSumArr(int Arr[3][3], int Row, int Col, int ArrSum[3])
{
    for (int i = 0; i < Row; i++)
    {
        ArrSum[i] = RowSum(Arr, i, Col);
    }
}
int RowSum(int Arr[3][3], int RowNumber, int Col)
{
    int Sum = 0;
    for (int j = 0; j < Col; j++)
    {
        Sum += Arr[RowNumber][j];
    }
    return Sum;
}
