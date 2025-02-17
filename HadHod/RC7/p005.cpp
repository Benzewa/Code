// C7 vid 5
// Col Sum of an Array

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int Random(int From, int To);
void FillArray(int Arr[3][3], int Row, int Col);
void PrintArray(int Arr[3][3], int Row, int Col);
void PrintColSum(int Arr[3][3], int Row, int Col);
int ColSum(int Arr[3][3], int Row, int ColNum);

int main()
{
    int ArrSrc[3][3];
    FillArray(ArrSrc, 3, 3);
    PrintArray(ArrSrc, 3, 3);
    PrintColSum(ArrSrc, 3, 3);
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
void PrintColSum(int Arr[3][3], int Row, int Col)
{
    for (int j = 0; j < Col; j++)
    {
        cout << "Col " << j + 1 << " Sum : " << ColSum(Arr, Row, j) << "\n";
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
