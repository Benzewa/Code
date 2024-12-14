// vid 3
// Save Sum of Each Row in a one dim Arr
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int Random(int From,int To);
void FillArr(int Arr[3][3],int Row,int Col);
void PrintArr(int Arr[3][3],int Row,int Col);
void FillSumArr(int ArrSrc[3][3],int ArrSum[3],int Row,int Col);
int RowSum(int Arr[3][3],int RowNumber,int Col);
void PrintSumArr(int Arr[3],int Size);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};
    FillArr(ArrSrc,3,3);
    PrintArr(ArrSrc,3,3);

    int SumArr[3] = {0};
    FillSumArr(ArrSrc,SumArr,3,3);
    PrintSumArr(SumArr,3);
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[3][3],int Row,int Col)
{
    for(int i = 0;i < Row;i++)
    {
        for(int j = 0;j < Col;j++)
        {
            Arr[i][j] = Random(1,5);
        }
    }
}
void PrintArr(int Arr[3][3],int Row,int Col)
{
    for(int i = 0;i < Row;i++)
    {
        for(int j = 0;j < Col;j++)
        {
            cout << setw(3) << Arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void FillSumArr(int ArrSrc[3][3],int ArrSum[3],int Row,int Col)
{
    for(int i = 0;i < Row;i++)
    {
        ArrSum[i] = RowSum(ArrSrc,i,Col);
    }
}
int RowSum(int Arr[3][3],int RowNumber,int Col)
{
    int Sum = 0;
    for(int j = 0;j < Col;j++)
    {
        Sum = Sum + Arr[RowNumber][j];
    }
    return Sum;
}
void PrintSumArr(int Arr[3],int Size)
{
    for(int i = 0;i < Size;i++)
    {
        cout << setw(6) << Arr[i] << "\n";
    }
}
