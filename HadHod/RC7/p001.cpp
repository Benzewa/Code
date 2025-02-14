// C7 Vid 1
// Write a Program to fill 3x3 matrix with Random Numbers

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNum(int From, int To);
void FillArr(int Arr[3][3], int Row, int Col);
void PrintArr(int Arr[3][3], int Row, int Col);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3] = {0};
    FillArr(Arr,3,3);
    PrintArr(Arr,3,3);
}
int RandomNum(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row;i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Arr[i][j] = RandomNum(1, 5);
        }
    }
}
void PrintArr(int Arr[3][3], int Row, int Col)
{
    for(int i = 0;i < Row;i++)
    {
        for(int j = 0;j < Col;j++)
        {
            cout << Arr[i][j];
        }
        cout << "\n";
    }
}
