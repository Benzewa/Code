#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To);
void FillArr(int Arr1[3][3], int Rows, int Cols);
void PrintArr(int Arr1[3][3], int Rows, int Cols);
void PrintColSum(int Arr1[3][3], int Rows, int Cols);
int ColSum(int Arr1[3][3], int Rows, int ColNumber);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};
    int ArrDes[3] = {0};
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    PrintColSum(ArrSrc, 3, 3);
}

int RandomNumber(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}

void FillArr(int Arr1[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr1[i][j] = RandomNumber(10, 50);
        }
    }
}

void PrintArr(int Arr1[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << Arr1[i][j] << " ";
        }
        cout << "\n";
    }
}

void PrintColSum(int Arr1[3][3], int Rows, int Cols)
{
    for (int j = 0; j < Cols; j++)
    {
        cout << "Col Num " << j + 1 << " : " << ColSum(Arr1, Rows, j) << "\n";
    }
}

int ColSum(int Arr1[3][3], int Rows, int ColNumber)
{
    int Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        Sum += Arr1[i][ColNumber];
    }
    return (Sum);
}
