// vid 26 C5
// Sum of Random Arr

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int Random(int From, int To);
int ReadNum(string Msg);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
int Sum(int Arr[100], int ArrSize);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr,ArrSize);
    PrintArr(Arr, ArrSize);
    cout << "\nSum : " << Sum(Arr, ArrSize) << "\n"; 
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
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
void FillArr(int Arr[100], int &ArrSize)
{
    ArrSize = 101;
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Please Enter Arr Size of max 100 : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(10,20);
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
    }
}
int Sum(int Arr[100], int ArrSize)
{
    int Sum = 0;
    for(int i = 0;i < ArrSize;i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}
