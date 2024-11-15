// vid 23 C5
// Find Max Num in Random ARR size of 100

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Msg);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
int Max(int Arr[100], int ArrSize);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr, ArrSize);
    PrintArr(Arr, ArrSize);
    cout << "\nMax : " << Max(Arr, ArrSize);
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
    ArrSize = ReadNum("Please Enter Arr Size : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Arr Size exceeds 100 : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(50,99);
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize; i++)
    {
        cout << Arr[i] << " ";
    }
}
int Max(int Arr[100], int ArrSize)
{
    int Max = 0;
    for(int i = 0;i < ArrSize;i++)
    {
        if(Arr[i] > Max)
            Max = Arr[i];
    }
    return Max;
}
