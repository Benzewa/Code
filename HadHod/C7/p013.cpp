// Revision
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int Random(int From, int To);
void FillArr(int ArrSrc[3][3], int Row, int Col);
void PrintArr(int ArrSrc[3][3], int Row, int Col);
void RowSumArr(int ArrSrc[3][3], int Row, int Col, int ArrDes[3]);
int RowSum(int ArrSrc[3][3], int RowNumber, int Col);
void ColSumArr(int ArrSrc[3][3], int Row, int Col, int ArrDes[3]);
int ColSum(int ArrSrc[3][3], int Row, int ColNumber);
void PrintSumArr(int ArrDes[3], int Size);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3] = {0};
    int ArrRowDes[3] = {0};
    int ArrColDes[3] = {0};

    cout << "Random 3 x 3 Matrix\n";
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);

    RowSumArr(ArrSrc, 3, 3, ArrRowDes);
    cout << "Row Sum Matrix\n";
    PrintSumArr(ArrRowDes, 3);

    ColSumArr(ArrSrc, 3, 3, ArrColDes);
    cout << "Col Sum Matrix\n";
    PrintSumArr(ArrColDes, 3);
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int ArrSrc[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            ArrSrc[i][j] = Random(10, 99);
        }
    }
}
void PrintArr(int ArrSrc[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << setw(3) << ArrSrc[i][j] << " ";
        }
        cout << "\n";
    }
}
void RowSumArr(int ArrSrc[3][3], int Row, int Col, int ArrDes[3])
{
    for (int i = 0; i < 3; i++)
    {
        ArrDes[i] = RowSum(ArrSrc, i, Col);
    }
}
int RowSum(int ArrSrc[3][3], int RowNumber, int Col)
{
    int Sum = 0;
    for (int j = 0; j < Col; j++)
    {
        Sum += ArrSrc[RowNumber][j];
    }
    return Sum;
}
void ColSumArr(int ArrSrc[3][3], int Row, int Col, int ArrDes[3])
{
    for (int j = 0; j < 3; j++)
    {
        ArrDes[j] = ColSum(ArrSrc, Row, j);
    }
}
int ColSum(int ArrSrc[3][3], int Row, int ColNumber)
{
    int Sum = 0;
    for (int i = 0; i < Row; i++)
    {
        Sum += ArrSrc[i][ColNumber];
    }
    return Sum;
}
void PrintSumArr(int ArrDes[3], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        cout << setw(7) << ArrDes[i] << "\n";
    }
}
