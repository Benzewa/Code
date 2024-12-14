// vid 2
// Fill 3 x 3 Random matrix
// print out Sum of Each row

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
// cin.get();
using namespace std;

int Random(int From, int To);
void FillArr(int Arr[3][3], int Row, int Col);
void PrintArr(int Arr[3][3], int Row, int Col);
void PrintEachRowSum(int Arr[3][3], int Row, int Col);
int RowSum(int Arr[3][3],int RowNum, int Col);
int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3];
    FillArr(Arr, 3, 3);
    PrintArr(Arr, 3, 3);
    PrintEachRowSum(Arr,3,3);
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
            Arr[i][j] = Random(1, 10);
        }
    }
}
void PrintArr(int Arr[3][3], int Row, int Col)
{
    int Row0, Row1, Row2;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << setw(3) << Arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void PrintEachRowSum(int Arr[3][3], int Row, int Col)
{
    for(int i = 0 ;i < Row;i++)
    {
        cout << "Row " << i + 1 << " Sum : " << RowSum(Arr,i,Col) << "\n"; 
    }
}
int RowSum(int Arr[3][3],int RowNum, int Col)
{
    int Sum = 0;
    for(int j = 0;j < Col;j++)
    {
        Sum += Arr[RowNum][j];
    }
    return Sum;
}
