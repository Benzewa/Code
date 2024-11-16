// vid 28 C5
// Program to Fill Array with max size 100 with random numbers and copy it to
// another Arr
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Msg);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void CopyArr(int ArrSrc[100], int ArrDes[100],int ArrSrcSize);
void PrintArr(int Arr[100], int ArrSize);
int main()
{
    srand((unsigned)time(NULL));

    cout << "Hello World\n";
    int ArrSrc[100] = {};
    int ArrSize = 0;
    int ArrDes[100] = {};
    FillArr(ArrSrc, ArrSize);
    cout << "Src Arr Elements : ";
    PrintArr(ArrSrc, ArrSize);
    cout << "\n";
    cout << "Des Arr Elements Before Copy : ";
    PrintArr(ArrDes, ArrSize);
    cout << "\n";
    cout << "Des Arr Elements : ";
    CopyArr(ArrSrc, ArrDes, ArrSize);
    PrintArr(ArrDes, ArrSize);
    cout << "\n";
}
int ReadNum(string Msg)
{
    int Num = 0;
    for(;Num <= 0;)
    {
        cout << Msg;
        cin >> Num;
    }
    return Num;
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[100], int &ArrSize)
{
    ArrSize = 1000;
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Please Enter Arr Size : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(10, 20);
    }
}
void CopyArr(int ArrSrc[100], int ArrDes[100],int ArrSrcSize)
{
    for(int i = 0;i < ArrSrcSize;i++)
    {
        ArrDes[i] = ArrSrc[i];
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
    }
}
