// Fill Arr With Random Numbers and Search for a NUmber
// vid 34 C5
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Msg);
int Random(int From,int To);
void FillArr(int Arr[100],int ArrSize);
void PrintArr(int Arr[100],int ArrSize);
int Search(int Arr[100],int ArrSize,int Num);
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 10;
    FillArr(Arr,ArrSize);
    PrintArr(Arr,ArrSize);

    int Num = 0;
    Num = ReadNum("What Num Search For : ");
    int NumPosition = 0;
    NumPosition = Search(Arr,ArrSize,Num);
    if(NumPosition == -1)
        cout << "Number not Found :-(\n";
    else
        cout << "Found At index " << NumPosition << " Order : " << NumPosition +
            1;
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
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        Arr[i] = Random(1,20);
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        printf("%02d ",Arr[i]);
    }
    cout << "\n";
}
int Search(int Arr[100],int ArrSize,int Num)
{
    for(int i = 0;i < ArrSize;i++)
    {
        if(Num == Arr[i])
            return i;
    }
    return -1;
}
