// vid 4
// print Sum of Each Col
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
int Random(int From,int To);
void FillArr(int Arr[3][3],int Row,int Col);
void PrintArr(int Arr[3][3],int Row,int Col);
void FillSumArr(int Arr[3][3],int ArrSum[3],int Row,int Col);
int ArrSum(int Arr[3][3],int Row,int ColNum);
void PrintSumArr(int Arr[3],int Size);
int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};
    int ArrDes[3] = {0};
    
    FillArr(ArrSrc,3,3);
    PrintArr(ArrSrc,3,3);

    FillSumArr(ArrSrc,ArrDes,3,3);
    PrintSumArr(ArrDes,3);
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
void FillSumArr(int Arr[3][3],int ArrSumArr[3],int Row,int Col)
{
    for(int j = 0;j < Col;j++)
    {
        ArrSumArr[j] = ArrSum(Arr,Row,j);
    }
}
int ArrSum(int Arr[3][3],int Row,int ColNum)
{
    int Sum = 0;
    for(int i = 0;i < Row;i++)
    {
        Sum += Arr[i][ColNum];
    }
    return Sum;
}
void PrintSumArr(int Arr[3],int Size)
{
    for(int i = 0;i < Size;i++)
    {
        cout << setw(7) << Arr[i] << "\n";
    }
}
