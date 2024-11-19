// Problem 36 C5
// Semi - Dynamic Array

#include <iostream>
#include <string>
using namespace std;
void InputNumInArr(int Arr[100],int &ArrSize);
int ReadNum(string Message);
void AddArrElement(int Num,int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);

int main()
{
    int Arr[100] = {};
    int ArrSize = 0;
    InputNumInArr(Arr,ArrSize);
    PrintArr(Arr,ArrSize);
}
void InputNumInArr(int Arr[100],int &ArrSize)
{
    bool AddMore = true;
    while(AddMore)
    {
        AddArrElement(ReadNum("Please Enter Num : "),Arr,ArrSize);
        cout << "Wanna Add MOre Number ? [0] No , [1] Yes\n";
        cin >> AddMore;
    }
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
void AddArrElement(int Num,int Arr[100],int &ArrSize)
{
    ArrSize++;
    Arr[ArrSize - 1] = Num;
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
