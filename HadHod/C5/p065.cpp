// Vid 29 C5
// Copy Only Prime Numbers

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
// Deal With Enums Like BOOLEAN
enum EnPrime{Prime, NonPrime};

int ReadNum(string Message);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
EnPrime IsPrime(int Num);
void CopyArr(int Arr1[100], int Arr2[100], int ArrSize);
void CopyPrime(int Arr1[100], int Arr3[100], int Arr1Size, int &Arr3Size);
int main()
{
    srand((unsigned)time(NULL));
    int Arr1[100] = {};
    int Arr2[100] = {};
    int Arr3[100] = {};
    int ArrSize = 100;
    int Arr3Size = 0;
    //cout << "Arr 1 Intitalized Elements : ";
    //PrintArr(Arr1,ArrSize);
    //cout << "Arr 2 Intitalized Elements : ";
    //PrintArr(Arr2,ArrSize);
    FillArr(Arr1, ArrSize);
    cout << "Arr 1 Elements : ";
    PrintArr(Arr1,ArrSize);
    CopyArr(Arr1, Arr2, ArrSize);
    cout << "Arr 2 Elements : ";
    PrintArr(Arr2,ArrSize);
    CopyPrime(Arr1, Arr3, ArrSize, Arr3Size);
    cout << "Prime\n";
    cout << "Arr 3 Elements : ";
    PrintArr(Arr3,Arr3Size);
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
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[100], int &ArrSize)
{
    ArrSize = ReadNum("Please Enter Arr Size : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Please Enter Arr Size : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(1,99);
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}
EnPrime IsPrime(int Num)
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
        return NonPrime;
}
void CopyArr(int Arr1[100], int Arr2[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        Arr2[i] = Arr1[i];
    }
}
void CopyPrime(int Arr1[100], int Arr3[100], int Arr1Size, int &Arr3Size)
{
    int Counter = 0;
    for(int i = 0;i < Arr1Size;i++)
    {
        if(IsPrime(Arr1[i]) == Prime)
        {
            Arr3Size++; 
            Arr3[Counter] = Arr1[i];
            Counter++;
        }
    }
}
