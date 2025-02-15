#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int Random(int From, int To);
void FillArray(int Arr[3][3], int Row, int Col);
void PrintArray(int Arr[3][3], int Row, int Col);
void PrintEachRowSum(int Arr[3][3], int Row, int Col);
int RowSum(int Arr[3][3], int RowNumber, int Col);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3];
    FillArray(ArrSrc, 3, 3);
    PrintArray(ArrSrc, 3, 3);
    PrintEachRowSum(ArrSrc, 3, 3);
}

int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}

void FillArray(int Arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Arr[i][j] = Random(1, 99);
        }
    }
}

void PrintArray(int Arr[3][3], int Row, int Col)
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
void PrintEachRowSum(int Arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        cout << "Row : " << i + 1 << " Sum : " << RowSum(Arr, i, Col) << "\n";
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