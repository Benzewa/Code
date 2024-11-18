// Vid 32 C5
// Copy Arr in Reverse Order
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
void RevArr(int Arr[100], int ArrSize);
void Swap(int &Num1, int &Num2);
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr,ArrSize);
    cout << "Arr   1   Elements   : ";
    PrintArr(Arr,ArrSize);
    RevArr(Arr,ArrSize);
    cout << "Arr 1 After Reversed : ";
    PrintArr(Arr,ArrSize);
}
int ReadNum(string Message)
{
    int Num = 0;
    while (Num <= 0)
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
    ArrSize = ReadNum("Please Enter Array Size : ");
    while(ArrSize > 100)
        ArrSize = ReadNum("Please Enter Array Size : ");
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = i + 1;
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
void RevArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize / 2;i++)
    {
        // ArrSize - i - 1 because its zero indexed
        Swap(Arr[i], Arr[ArrSize - i - 1]);
    }
}
void Swap(int &Num1, int &Num2)
{
    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
