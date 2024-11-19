// Reverse Arr
// Vid 32 C5

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
void RevArr(int Arr[100], int ArrSize);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr,ArrSize);
    cout << "Arr Elements : ";
    PrintArr(Arr,ArrSize);
    cout << "Arr Reversed : ";
    RevArr(Arr,ArrSize);
    PrintArr(Arr,ArrSize);
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
    ArrSize = ReadNum("Please Enter Arr Size : ");
    while(ArrSize > 100)
        ArrSize = ReadNum("Please Enter Arr Size : ");
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = Random(1,99);
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
void RevArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize/2;i++)
    {
        Swap(Arr[i],Arr[ArrSize - i - 1]);
    }
}
