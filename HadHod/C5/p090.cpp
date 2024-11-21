// Vid 40 C5
// Copy Distinct Numbers
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

void FillArr(int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
int FindNumPosition(int Num,int Arr[100],int ArrSize);
bool isFound(int Num,int Arr[100],int ArrSize);
void Add(int Num,int Arr[100],int &ArrSize);
void CopyArr(int ArrSrc[100],int ArrDes[100],int ArrSrcSize,int &ArrDesSize);

int main()
{
    int ArrSrc[100] = {};
    int ArrDes[100] = {};
    int ArrSrcSize = 0;
    int ArrDesSize = 0;
    FillArr(ArrSrc,ArrSrcSize);
    cout << "Arr Src Elements : ";
    PrintArr(ArrSrc,ArrSrcSize);
    CopyArr(ArrSrc,ArrDes,ArrSrcSize,ArrDesSize);
    cout << "Arr Des Elements : ";
    PrintArr(ArrDes,ArrDesSize);
}
void FillArr(int Arr[100],int &ArrSize)
{
    ArrSize = 10;

    Arr[0] = 10;
    Arr[1] = 10;
    Arr[2] = 10;
    Arr[3] = 50;
    Arr[4] = 50;
    Arr[5] = 70;
    Arr[6] = 70;
    Arr[7] = 70;
    Arr[8] = 90;
    Arr[9] = 90;
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
int FindNumPosition(int Num,int Arr[100],int ArrSize)
{
    for(int i = 0;i< ArrSize;i++)
    {
        if(Num == Arr[i])
            return i;
    }
    return -1;
}
bool isFound(int Num,int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        if(FindNumPosition(Num,Arr,ArrSize) != -1)
            return true;
    }
    return false;
}
void Add(int Num,int Arr[100],int &ArrSize)
{
    ArrSize++;
    Arr[ArrSize - 1] = Num;
}
void CopyArr(int ArrSrc[100],int ArrDes[100],int ArrSrcSize,int &ArrDesSize)
{
    for(int i = 0;i < ArrSrcSize;i++)
    {
        if(!isFound(ArrSrc[i],ArrDes,ArrDesSize))
            Add(ArrSrc[i],ArrDes,ArrDesSize);
    }
}
