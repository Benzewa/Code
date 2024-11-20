// Vid 39 C5
// Copy Only Prime Numbers
// enums are used Like Booleans
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
enum enPrime{Prime,NonPrime};
int ReadNum(string Message);
int Random(int From,int To);
void FillArr(int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
void Add(int Num,int Arr[100],int &ArrSize);
void CopyArr(int ArrSrc[100],int ArrDes[100],int ArrSrcSize,int &ArrDesSize);
enPrime isPrime(int Num);
int main()
{
    srand((unsigned)time(NULL));
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
    ArrSize = ReadNum("Please Enter Arr Size : ");
    for(;ArrSize > 100;)
        ArrSize = ReadNum("Please Enter Arr Size : ");
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(10,50);
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
void CopyArr(int ArrSrc[100],int ArrDes[100],int ArrSrcSize,int &ArrDesSize)
{
    for(int i= 0;i < ArrSrcSize;i++)
    {
        if(isPrime(ArrSrc[i]) == Prime)
            Add(ArrSrc[i],ArrDes,ArrDesSize);
    }
}
enPrime isPrime(int Num)
{
    int Counter = 0;
    for(int i = 0;i <= Num;i++)
    {
        if(Num % i == 0)
            Counter++;
    }
    if(Counter == 2)
        return Prime;
    return NonPrime;
}
