// vid 22 C5

// using &num will make you change the value of num and affect the value of main 
// call by ref

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int ReadNum(string Msg);
void ReadArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
int TimesRepeated(int Num, int Arr[100], int ArrSize);

int main()
{
    int Arr[100] = {}, ArrSize = 0;
    int NumCheck = 0;

    ReadArr(Arr, ArrSize);
    PrintArr(Arr, ArrSize);
    NumCheck = ReadNum("Enter Num to Check : ");
    cout << TimesRepeated(NumCheck, Arr, ArrSize) << " Times.\n";
}
int ReadNum(string Msg)
{
    int Num = 0;
    while(Num <=0)
    {
        cout << Msg;
        cin >> Num;
    }
    return Num;
}
void ReadArr(int Arr[100], int &ArrSize)
{
    ArrSize = ReadNum("Please Enter Arr Size : ");
    while(ArrSize > 100)
    {
        cout << "Arr Size exceeds 100\n";
        ArrSize = ReadNum("Please Enter Arr Size :");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        cout << "Enter Element : ";
        cin >> Arr[i];
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
        if(i == ArrSize - 1)
            cout << "\n";
    }
}
int TimesRepeated(int Num, int Arr[100], int ArrSize)
{
    int Counter = 0;
    for(int i = 0;i < ArrSize;i++)
    {
        if(Num == Arr[i])
            Counter++;
    }
    return Counter;
}
