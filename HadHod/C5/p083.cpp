// Vid 36 C5
// Semi-Dynamic Arr

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
void InputNumInArr(int Arr[100],int &ArrSize);
void AddNum(int Num, int Arr[100], int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
int main()
{
    int Arr[100] = {};
    int ArrSize = 0;
    InputNumInArr(Arr,ArrSize);
    PrintArr(Arr,ArrSize);
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
void InputNumInArr(int Arr[100],int &ArrSize)
{
    bool Add = true;
    while(Add)
    {
        AddNum(ReadNum("Please Enter Num : "),Arr,ArrSize);
        cout << "Wanna Add Another Num ? [0] NO, [1] YES\n";
        cin >> Add;
    }
}
void AddNum(int Num, int Arr[100], int &ArrSize)
{
    ArrSize++;
    Arr[ArrSize - 1] = Num;
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
    cout << "Arr Size : " << ArrSize;
}
