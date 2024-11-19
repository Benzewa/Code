// Print Arr in Reverse Order
// Vid 32 C5

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int ReadNum(string Message);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
void Swap(int &Num1,int &Num2);
void RevArr(int Arr1[100],int Arr2[100], int ArrSize);

int main()
{
    int Arr1[100] = {},Arr2[100] = {},ArrSize = 0;
    FillArr(Arr1,ArrSize);
    cout << "Arr 1 Elements : ";
    PrintArr(Arr1,ArrSize);
    cout << "Arr 2 Elements : ";
    PrintArr(Arr2,ArrSize);
    cout << "Arr 2 Reversed : ";
    RevArr(Arr1,Arr2,ArrSize);
    PrintArr(Arr2,ArrSize);
}
int ReadNum(string Message)
{
    int Num = 0;
    while(Num <= 0)
    {
        cout << Message;
        cin >> Num;
    }
    return Num;
}
void FillArr(int Arr[100], int &ArrSize)
{
    ArrSize = ReadNum("Please Enter Arr Size : ");
    while(ArrSize > 100)
        ArrSize = ReadNum("PLease Enter Arr Size : ");
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
void Swap(int &Num1,int &Num2)
{
    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void RevArr(int Arr1[100],int Arr2[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        Arr2[i] = Arr1[ArrSize - i - 1];
    }
}
