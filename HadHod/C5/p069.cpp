// Vid 31 C5
// Shuffle ordered Array
// Fisher Yates Algorithm

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int ReadNum(string Message);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
void Swap(int &Num1, int &Num2);
void Shuffle(int Arr[100], int ArrSize);

int main()
{
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr, ArrSize);
    cout << "Arr 1 Elements : ";
    PrintArr(Arr, ArrSize);
    Shuffle(Arr, ArrSize);
    cout << "Arr 1 Shuffled : ";
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
    ArrSize = ReadNum("Please Enter Size : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Please Enter Size : ");
    }
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
void Swap(int &Num1, int &Num2)
{
    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void Shuffle(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        Swap(Arr[Random(Arr[0], Arr[ArrSize - 1])],Arr[Random(Arr[0], Arr[ArrSize - 1])]);
    }
}
