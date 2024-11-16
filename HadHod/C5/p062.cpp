// Copy Only Prime Elements
// vid 29 C5

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Msg);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void CopyArr(int ArrSrc[100], int ArrDes[100], int ArrSize);
void CopyPrime(int ArrSrc[100], int ArrDes[100], int ArrSize);
void PrintArr(int Arr[100], int ArrSize);
bool IsPrime(int Num);
int main()
{
    srand((unsigned)time(NULL));
    int Arr1[100] = {}, Arr2[100] = {},Arr3[100] = {}, ArrSize = 0;
    FillArr(Arr1,ArrSize);
    cout << "Arr 1 Elements : ";
    PrintArr(Arr1,ArrSize);
    cout << "\n";
    CopyArr(Arr1,Arr2,ArrSize);
    cout << "Arr 2 Elements : ";
    PrintArr(Arr2,ArrSize);
    cout << "\n";
    CopyPrime(Arr1,Arr3,ArrSize);
    cout << "Arr  3  Primes : ";
    PrintArr(Arr3,ArrSize);
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
    for(;ArrSize > 100;)
    {
        ArrSize = ReadNum("Please Enter ArrSize : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(2, 8);
    }
}
void CopyArr(int ArrSrc[100], int ArrDes[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        ArrDes[i] = ArrSrc[i];
    }
}
void CopyPrime(int ArrSrc[100], int ArrDes[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        if(IsPrime(ArrSrc[i]))
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
bool IsPrime(int Num)
{
    int Counter = 0;
    for(int i = 0;i <= Num;i++)
    {
        if(Num % i == 0)
            Counter++;
    }
    if(Counter == 2)
        return true;
    return false;
}
