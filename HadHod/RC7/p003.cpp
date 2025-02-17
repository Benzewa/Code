// C7 vid 2
// Row Sum of an Array

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int Random(int From, int To);
void FillArray(int Arr[3][3], int Row, int Col);
void PrintArray(int Arr[3][3], int Row, int Col);
void PrintRowSum(int Arr[3][3], int Row, int Col);
int RowSum(int Arr[3][3], int RowNum, int Col);

int main()
{
    int ArrSrc[3][3];
    FillArray(ArrSrc, 3, 3);
    PrintArray(ArrSrc, 3, 3);
    PrintRowSum(ArrSrc, 3, 3);
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
            Arr[i][j] = Random(1, 5);
        }
    }
}
void PrintArray(int Arr[3][3], int Row, int Col)
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
void PrintRowSum(int Arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        cout << "Sum of Row " << i + 1 << " : " << RowSum(Arr, i, Col) << "\n";
    }
}
int RowSum(int Arr[3][3], int RowNum, int Col)
{
    int Sum = 0;
    for (int j = 0; j < Col; j++)
    {
        Sum += Arr[RowNum][j];
    }
    return (Sum);
}