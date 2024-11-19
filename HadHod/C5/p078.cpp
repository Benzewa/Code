// Search For A Number in Array

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Msg);
void FillArr(int Arr[100],int ArrSize);
void PrintArr(int Arr[100],int ArrSize);
int FoundAt(int Arr[100], int ArrSize, int Num);
int main()
{
    int Arr[100] = {};
    int ArrSize = ReadNum("Please Enter Arr Size : ");
    FillArr(Arr,ArrSize);
    PrintArr(Arr,ArrSize);
    
    int Num = ReadNum("Enter Number Looking for : ");
    int Position = FoundAt(Arr,ArrSize,Num);
    if(Position == -1)
        cout << "Number Not Found \n";
    else
    {
        cout << "Number Found At index : " << Position << "\n";
        cout << "Number Found At order : " << Position + 1 << "\n";
    }
}
int ReadNum(string Msg)
{
    int Num = 0;
    for(;Num <= 0;)
    {
        cout << "Please Enter Num : ";
        cin >> Num;
    }
    return Num;
}
void FillArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = i + 1;
    }
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}
int FoundAt(int Arr[100], int ArrSize, int Num)
{
    for(int i = 0;i < ArrSize;i++)
    {
        if(Num == Arr[i])
            return i;
    }
    return -1;
}
