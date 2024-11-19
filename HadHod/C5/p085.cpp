// Vid 38 C5
// Resolve Copy Odd Numbers in Arr to another Array
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int ReadNum(string Message);
int Random(int From,int To);
void FillArr(int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
void Add(int Num,int Arr[100],int &ArrSize);
void CopyArr(int ArrSrc[100],int ArrSrcSize,int ArrDes[100],int &ArrDesSize);
bool IsOdd(int Num);

using namespace std;
int main()
{
    int ArrSrc[100] = {}, ArrDes[100] = {};
    int ArrSrcSize = 0, ArrDesSize = 0;
    FillArr(ArrSrc,ArrSrcSize);
    cout << "Arr Src Elements : ";
    PrintArr(ArrSrc,ArrSrcSize);

    CopyArr(ArrSrc,ArrSrcSize,ArrDes,ArrDesSize);
    cout << "Arr Des Elements : ";
    PrintArr(ArrDes,ArrDesSize);
}
int ReadNum(string Message)
{
    int Num = 0;
    for(;Num <= 0;)
    {
        cout << Message;
        cin >> Num;
    }
    return Num;
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[100],int &ArrSize)
{
    ArrSize = ReadNum("Enter Array Size : ");
    for(;ArrSize > 100;)
        ArrSize = ReadNum("Enter Array Size : ");
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(1,5);
    }
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
void Add(int Num,int Arr[100],int &ArrSize)
{
    ArrSize++;
    Arr[ArrSize - 1] = Num;
}
void CopyArr(int ArrSrc[100],int ArrSrcSize,int ArrDes[100],int &ArrDesSize)
{
    for(int i = 0;i < ArrSrcSize;i++)
    {
        if(IsOdd(ArrSrc[i]))
            Add(ArrSrc[i],ArrDes,ArrDesSize);
    }
}
bool IsOdd(int Num)
{
    if(Num % 2 != 0)
        return true;
    return false;
}
