// Shuffle Ordered Numbers Array
// Vid 31 C5
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void Swap(int &Num1, int &Num2);
void PrintArr(int Arr[100], int ArrSize);
void Shuffle(int Arr[100], int ArrSize);
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr, ArrSize);
    cout << "Arr Elements  Ordered : ";
    PrintArr(Arr, ArrSize);
    Shuffle(Arr,ArrSize);
    cout << "Arr Elements Shuffled : ";
    PrintArr(Arr, ArrSize);
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
    ArrSize = 1000;
    for(;ArrSize > 100;)
    {
        ArrSize = ReadNum("Please Enter Arr Size : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = i + 1;
    }
}
void Swap(int &Num1, int &Num2)
{
    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}
void Shuffle(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        int Index1 = Random(0, ArrSize - 1);
        int Index2 = Random(0, ArrSize - 1);
        Swap(Arr[Index1],Arr[Index2]);
    }
}
