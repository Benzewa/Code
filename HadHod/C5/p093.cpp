// Vid 42 && Vid 43 C5
// Count Odd && Even Numbers in a Random Array
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From,int To);
void FillArr(int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
int OddCount(int Arr[100],int ArrSize);
int EvenCount(int Arr[100],int ArrSize);
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr,ArrSize);
    cout << "Arr Elements : ";
    PrintArr(Arr,ArrSize);
    cout << "Number of Odd Numbers is : " << OddCount(Arr,ArrSize) << "\n";
    cout << "Number of Even Numbers is : " << EvenCount(Arr,ArrSize);
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
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[100],int &ArrSize)
{
    ArrSize = ReadNum("Please Enter Arr Size : ");
    for(;ArrSize > 100;)
        ArrSize = ReadNum("Please Enter Arr Size : ");
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(10,50);
    }
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
int OddCount(int Arr[100],int ArrSize)
{
    int Counter = 0;
    for(int i = 0;i < ArrSize;i++)
    {
        if(Arr[i] % 2 != 0)
            Counter++;
    }
    return Counter;
}
int EvenCount(int Arr[100],int ArrSize)
{
    int Counter = 0;
    for(int i = 0;i < ArrSize;i++)
    {
        if(Arr[i] % 2 == 0)
            Counter++;
    }
    return Counter;
}
