#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int ReadNum(string Msg);
void ReadArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
int CheckDigit(int Arr[100], int ArrSize ,int Num);
int main()
{
    int Arr[100] = {};
    int ArrSize = 0;
    int CheckNum = ReadNum("Enter Num to Check for : ");
    ReadArr(Arr, ArrSize);
    cout << "Arr Elements \n";
    PrintArr(Arr, ArrSize);
    cout << CheckNum << " is Repeated " << CheckDigit(Arr, ArrSize, CheckNum) <<
        "Times ";
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
void ReadArr(int Arr[100], int &ArrSize)
{
    ArrSize = ReadNum("Please Enter Arr Size : ");
    if (ArrSize > 100)
    {
        ArrSize = ReadNum("Please Dont Exceed 100 in Size :");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> Arr[i];
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize; i++)
    {
        if(i == ArrSize - 1)
            cout << Arr[i];
        else
            cout << Arr[i] << " ";
    }
}
int CheckDigit(int Arr[100], int ArrSize, int Num)
{
    int Counter = 0;
    for(int i = 0; i < ArrSize;i++)
    {
        if(Num == Arr[i])
            Counter++;
    }
    return Counter;
}
