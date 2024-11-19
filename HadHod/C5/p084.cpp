// Vid 37 C5
// Resolve Copy Array Problem using Add Array ELement
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From,int To);
void FillArr(int Ar[100],int &ArrSize);
void Add(int Num,int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
void CopyArr(int ArrSrc[100],int ArrDes[100],int ArrSrcSize,int &ArrDesSize);
int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[100] = {};
    int ArrDes[100] = {};
    int ArrSrcSize = 0;
    int ArrDesSize = 0;
    FillArr(ArrSrc,ArrSrcSize);
    cout << "Src Array Elements : ";
    PrintArr(ArrSrc,ArrSrcSize);

    CopyArr(ArrSrc,ArrDes,ArrSrcSize,ArrDesSize);
    cout << "Des Array Elements : ";
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
    ArrSize = ReadNum("Please Enter Array Size : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Please Enter Array Size : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(1,5);
    }
}
void Add(int Num,int Arr[100],int &ArrSize)
{
    ArrSize++;
    Arr[ArrSize - 1] = Num;
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
void CopyArr(int ArrSrc[100],int ArrDes[100],int ArrSrcSize,int &ArrDesSize)
{
    for(int i = 0;i < ArrSrcSize;i++)
    {
        Add(ArrSrc[i],ArrDes,ArrDesSize);
    }
}
