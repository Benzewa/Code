// vid 29 C5
// Copy Primes to Arr

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
enum enPrime{Prime, NotPrime};
int ReadNum(string Msg);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void CopyPrimeNum(int Arr1[100], int Arr2[100], int Arr1Size, int &Arr2Size);
enPrime IsPrime(int Num); // Deal With enums Like Boolean
void PrintArr(int Arr[100], int ArrSize);
int main()
{
    srand((unsigned)time(NULL));
    int Arr1[100] = {};
    int Arr1Size = 0;
    int Arr2[100] = {};
    int Arr2Size = 0;
    FillArr(Arr1, Arr1Size);
    cout << "Arr 1 Elements : ";
    PrintArr(Arr1, Arr1Size);
    CopyPrimeNum(Arr1, Arr2, Arr1Size, Arr2Size);
    cout << "Arr 2 Elements : ";
    PrintArr(Arr2, Arr2Size);
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
        ArrSize = ReadNum("Please Enter Arr Size : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(1,99);
    }
}
void CopyPrimeNum(int Arr1[100], int Arr2[100], int Arr1Size, int &Arr2Size)
{
    Arr2Size = 0;
    int Counter = 0;
    for(int i = 0;i < Arr1Size;i++)
    {
        if(IsPrime(Arr1[i]) == Prime)
        {
            Arr2Size++;
            Arr2[Counter] = Arr1[i];
            Counter++;
        }
    }
}
enPrime IsPrime(int Num)
{
    int Counter = 0;
    for(int i = 0;i <= Num;i++)
    {
        if(Num % i == 0)
            Counter++;
    }
    if(Counter == 2)
        return Prime;
    else
        return NotPrime;
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}
