// vid 29
// Two Dimension Array

#include <iostream>
#include <cstdio>

void FillArr(int Arr[10][10]);
void PrintArr(int Arr[10][10]);
int main()
{
    int Arr[10][10] = {};
    FillArr(Arr);
    PrintArr(Arr);
}
void FillArr(int Arr[10][10])
{
    for(int i = 0;i<10;i++)
    {
        for(int j = 0;j<10;j++)
        {
            Arr[i][j] = (i + 1) * (j + 1);
        }
    }
}
void PrintArr(int Arr[10][10])
{
    for(int i = 0;i < 10;i++)
    {
        for(int j = 0;j < 10;j++)
        {
            printf("%02d ",Arr[i][j]);
        }
        std::cout << "\n";
    }
}
