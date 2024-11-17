// vid 30 C5
// Sum of 2 Arrays in Another 3rd Array

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From, int To);
void FillArr(int Arr[100], int ArrSize);
void PrintArr(int Arr[100], int ArrSize);
void ArrSummation(int Arr1[100], int Arr2[100], int ArrSize, int ArrSum[100]);
int main()
{
    srand((unsigned)time(NULL));
    int Arr1[100] = {};
    int Arr2[100] = {};
    int ArrSize = ReadNum("Please Enter ArrSize : ");
    FillArr(Arr1,ArrSize);
    FillArr(Arr2,ArrSize);
    cout << "Arr 1 Elements : ";
    PrintArr(Arr1,ArrSize);
    cout << "Arr 2 Elements : ";
    PrintArr(Arr2,ArrSize);
    int ArrSum[100] = {};
    ArrSummation(Arr1, Arr2, ArrSize, ArrSum);
    cout << "Arr 3 Elements : ";
    PrintArr(ArrSum,ArrSize);
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
void FillArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(1, 99);
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        printf("%03d ",Arr[i]);
    }
    cout << "\n";
}
void ArrSummation(int Arr1[100], int Arr2[100], int ArrSize, int ArrSum[100])
{
    for(int i = 0;i < ArrSize;i++)
    {
        ArrSum[i] = Arr1[i] + Arr2[i];
    }
}
