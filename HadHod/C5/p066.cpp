// Vid 30 C5
// Sum of Two Arrays To a Third
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From, int To);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
void SumArr(int Arr1[100],int Arr2[100],int Arr3[100],int ArrSize);
int main()
{
    srand((unsigned)time(NULL));
    int Arr1[100] = {};
    int Arr1Size = 0;
    int Arr2[100] = {};
    int Arr2Size = 0;
    FillArr(Arr1, Arr1Size);
    FillArr(Arr2, Arr2Size);
    cout << "Arr 1 Elements : ";
    PrintArr(Arr1, Arr1Size);
    cout << "Arr 2 Elements : ";
    PrintArr(Arr2, Arr2Size);
    int Arr3[100] = {};
    cout << "Arr 3 Elements : ";
    SumArr(Arr1,Arr2,Arr3,Arr1Size);
    PrintArr(Arr3, Arr1Size);


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
    ArrSize = ReadNum("Please Enter ArrSize : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Please Enter ArrSize : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(1, 99);
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        printf("%03d ",Arr[i]);
        //cout << Arr[i] << " ";
    }
    cout << "\n";
}
void SumArr(int Arr1[100],int Arr2[100],int Arr3[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        Arr3[i] = Arr1[i] + Arr2[i];
    }
}
