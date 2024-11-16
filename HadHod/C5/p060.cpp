// vid 27 C5
// AVG of Random Arr

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Msg);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
int Sum(int Arr[100], int ArrSize);
double Avg(int Arr[100], int ArrSize);
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr, ArrSize);
    PrintArr(Arr, ArrSize);
    cout << "\n";
    cout << "Sum : " << Sum(Arr, ArrSize) << "\n";
    cout << "Avg : " << Avg(Arr, ArrSize);
}
int ReadNum(string Msg)
{
    int Num = 0;
    for (; Num <= 0;)
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
    for (; ArrSize > 100;)
    {
        ArrSize = ReadNum("PLease Enter Arr Size : ");
    }
    for (int i = 0; i < ArrSize; i++)
    {
        Arr[i] = Random(10, 15);
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for (int i = 0; i < ArrSize; i++)
    {
        if (i == ArrSize - 1)
            cout << Arr[i];
        else
            cout << Arr[i] << " ";
    }
}
int Sum(int Arr[100], int ArrSize)
{
    int Sum = 0;
    for (int i = 0; i < ArrSize; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}
double Avg(int Arr[100], int ArrSize)
{
    return (double)Sum(Arr, ArrSize) / (double)ArrSize;
}
