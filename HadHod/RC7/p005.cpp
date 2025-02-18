#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int Random(int From, int To);
void FillArrSrc(int Arr[3][3], int Rows, int Cols);
void PrintArrSrc(int Arr[3][3], int Rows, int Cols);
void FillArrDes(int ArrSrc[3][3], int Rows, int Cols, int ArrDes[3]);
int ColSum(int Arr[3][3], int Rows, int ColNum);
void PrintArrDes(int Arr[3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3];
    int ArrDes[3];
    FillArrSrc(ArrSrc, 3, 3);
    PrintArrSrc(ArrSrc, 3, 3);
    FillArrDes(ArrSrc, 3, 3, ArrDes);
    PrintArrDes(ArrDes, 3, 3);
}
int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}
void FillArrSrc(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr[i][j] = Random(1, 50);
        }
    }
}
void PrintArrSrc(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << Arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void FillArrDes(int ArrSrc[3][3], int Rows, int Cols, int ArrDes[3])
{
    for (int j = 0; j < Cols; j++)
    {
        ArrDes[j] = ColSum(ArrSrc, Rows, j);
    }
}
int ColSum(int Arr[3][3], int Rows, int ColNum)
{
    int Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        Sum += Arr[i][ColNum];
    }
    return (Sum);
}
void PrintArrDes(int Arr[3], int Rows, int Cols)
{
    for (int j = 0; j < Cols; j++)
    {
        cout << setw(3) << Arr[j] << "\n";
    }
}