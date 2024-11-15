// vid 25 C5
// Min of Random Arr

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Msg);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
int Min(int Arr[100], int ArrSize);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr, ArrSize);
    PrintArr(Arr, ArrSize);
    cout << "\nMin : " << Min(Arr, ArrSize);
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
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[100], int &ArrSize)
{
    ArrSize = ReadNum("Please Enter Arr Size : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Arr Size exceeds 100 : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(50,99);
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize; i++)
    {
        cout << Arr[i] << " ";
    }
}
int Min(int Arr[100], int ArrSize)
{
    int Min = Arr[0];
    for(int i = 0;i < ArrSize;i++)
    {
        if(Arr[i] < Min)
            Min = Arr[i];
    }
    return Min;
}
