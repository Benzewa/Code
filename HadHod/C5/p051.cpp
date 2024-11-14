// vid 22 C5

// using &num will make you change the value of num and affect the value of main 
// call by ref

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

void PrintArr(int Arr[100], int ArrSize);
void ReadArr(int Arr[100], int &ArrSize);
int ReadNum(string Msg);
int Repeat(int Arr[100], int ArrSize, int Num);
//void Repeats(int Arr[100], int ArrSize);

int main()
{
    int Arr[100] = {};
    int ArrSize = 0;
    int NumCheck = 0;
    
    ReadArr(Arr,ArrSize);
    NumCheck = ReadNum("Enter Number to Check For : ");
    
    cout << "Original Arr\n";
    PrintArr(Arr, ArrSize);
    cout << "\n";

    cout << "Number " << NumCheck;
    cout << " is Repeated : ";
    cout << Repeat(Arr, ArrSize, NumCheck) << " Time(s)\n";

    //Repeats(Arr, ArrSize);

}

/*
void Repeats(int Arr[100], int ArrSize)
{
    int Num = 0;
    for(int i = 1;i <= 5;i++)
    {
        Num = ReadNum("Number : ");
        cout << " " << Repeat(Arr,ArrSize,Num) << "\n";
    }
}
*/

int Repeat(int Arr[100], int ArrSize, int Num)
{
    int Counter = 0;
    for(int i = 0; i < ArrSize; i++)
    {
        if(Num == Arr [i])
            Counter++;
    }
    return Counter;
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0; i < ArrSize;i++)
    {
        if(i == ArrSize - 1)
            cout << Arr[i];
        else
            cout << Arr[i] << " ";
    }
}
void ReadArr(int Arr[100], int &ArrSize)
{
    ArrSize = ReadNum("Enter Num of Elements : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("Maximum Arr Size is 100.");
    }
    cout << "Enter Arr Elements\n";
    for(int i = 0;i < ArrSize;i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> Arr[i];
    }
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
