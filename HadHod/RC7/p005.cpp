#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    cout << "Hello World\n";
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
void PrintArr(int Arr[3][3], int Rows, int Cols)
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