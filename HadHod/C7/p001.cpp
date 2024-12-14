// vid 1
// 3x3 Random Matrix

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void FillArr(int Arr[3][3]);
void PrintArr(int Arr[3][3]);
int Random(int From,int To);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3];

    FillArr(ArrSrc);
    PrintArr(ArrSrc);
}
void FillArr(int Arr[3][3])
{
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            Arr[i][j] = Random(1,5);
        }
    }
}
void PrintArr(int Arr[3][3])
{
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
