// Vid 31 C5
// Shuffle ordered Array
// Fisher Yates Algorithm

#include <iostream>
#include <string>
#include <cstdlib> // Random
#include <cstdio>  // printf
using namespace std;
int ReadNum(string Message);
void FillArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);
void Swap(int &A,int &B);
void Shuffle(int Arr[100], int ArrSize);
int main()
{
    srand((unsigned)time(NULL));
    int Arr1[100] = {};
    int Arr2[100] = {};
    int ArrSize = 0;

    FillArr(Arr1, ArrSize);
    cout << "Arr 1 Elements : ";
    PrintArr(Arr1, ArrSize);

    Shuffle(Arr1, ArrSize);
    cout << "Arr 1 Shuffled : ";
    PrintArr(Arr1, ArrSize);
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
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[100], int &ArrSize)
{
    ArrSize = 1000;
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Please Arr Size : ");
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
void Swap(int &A,int &B)
{
    int Temp = A;
    A = B;
    B = Temp;
}
void Shuffle(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        Swap(Arr[Random(Arr[0],Arr[ArrSize - 1])],
                Arr[Random(Arr[0], Arr[ArrSize - 1])]);
    }
}
