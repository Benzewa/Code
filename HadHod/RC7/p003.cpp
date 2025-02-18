#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int Random(int From, int To);
void FillArr(int Arr[3][3], int Row, int Col);
void PrintArr(int Arr[3][3], int Row, int Col);
void FillSumArr(int Arr1[3][3], int Row, int Col, int Arr2[3]);
int RowSum(int Arr[3][3], int RowNumber, int Col);
void PrintArrDes(int Arr[3], int Num);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {};
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    int ArrDes[3] = {0};
    FillSumArr(ArrSrc, 3, 3, ArrDes);
    PrintArrDes(ArrDes, 3);
}
int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
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
            cout << setw(3) << Arr[i][j];
        }
        cout << "\n";
    }
}
void FillSumArr(int Arr1[3][3], int Row, int Col, int Arr2[3])
{
    for (int i = 0; i < Row; i++)
    {
        Arr2[i] = RowSum(Arr1, i, Col);
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
void PrintArrDes(int Arr[3], int Num)
{
    for (int i = 0; i < Num; i++)
    {
        cout << setw(3) << Arr[i] << "\n";
    }
}