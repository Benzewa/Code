// vid 1
// Random Matrix 3 x 3

#include <iostream>
#include <cstdlib>
#include <ctime>

int Random(int From,int To);
void FillArr(int Arr[3][3]);
void PrintArr(int Arr[3][3]);
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3];
    FillArr(ArrSrc);
    PrintArr(ArrSrc);
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[3][3])
{
    for(int i = 0;i <= 2;i++)
    {
        for(int j = 0;j <= 2;j++)
        {
            Arr[i][j] = Random(1,5);
        }
    }
}
void PrintArr(int Arr[3][3])
{
    for(int i = 0;i <= 2;i++)
    {
        for(int j = 0;j <= 2;j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << "\n";
    }
}
