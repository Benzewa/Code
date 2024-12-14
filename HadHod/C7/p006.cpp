// vid 2
// Print Each Row Sum

// Finding The Sum of Each Row (RowSum())
// Then going through each row with a loop ((PrintRowSum))

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int Random(int From,int To);
void FillArr(int Arr[3][3],int Row,int Col);
void PrintArr(int Arr[3][3],int Row,int Col);
void PrintRowSum(int Arr[3][3],int Row,int Col);
int RowSum(int Arr[3][3],int RowNumber,int Col);
int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3];
    FillArr(ArrSrc,3,3);
    PrintArr(ArrSrc,3,3);
    PrintRowSum(ArrSrc,3,3);
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[3][3],int Row,int Col)
{
    for(int i = 0;i < Row;i++)
    {
        for(int j = 0; j < Col;j++)
        {
            Arr[i][j] = Random(1,5);
        }
    }
}
void PrintArr(int Arr[3][3],int Row,int Col)
{
    for(int i = 0;i < Row;i++)
    {
        for(int j = 0; j < Col;j++)
        {
            cout << setw(3) <<Arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void PrintRowSum(int Arr[3][3],int Row,int Col)
{
    for(int i = 0;i < Row;i++)
    {
        cout << "Row " << i << " Sum : " << RowSum(Arr,i,Col) << "\n";
        cin.get();
    }
}
int RowSum(int Arr[3][3],int RowNumber,int Col)
{
    int Sum = 0;
    for(int j = 0;j < Col;j++)
    {
        Sum+=Arr[RowNumber][j];
    }
    return Sum;
}
