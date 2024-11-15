// vid 22 C5
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int ReadNum(string Msg);
void ReadArr(int Arr[100], int &ArrSize);
void PrintArr(int Arr[100], int ArrSize);

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100] = {};
    int ArrSize = 0;
    
    cout << "Arr : ";
    PrintArr(Arr, ArrSize);
    cout << "\n";
    
    ReadArr(Arr, ArrSize);
    cout << "Arr : ";
    PrintArr(Arr, ArrSize);

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
void ReadArr(int Arr[100], int &ArrSize)
{
    ArrSize = ReadNum("Please Enter Arr Size");
    for(;ArrSize > 100;)
    {
        ArrSize = ReadNum("Please Enter Arr Size");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        cout << "Element [" << i << "] : ";
        cin >> Arr[i];
    }
}
void PrintArr(int Arr[100], int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        if(i == (ArrSize - 1))
            cout << Arr[i];
        else
            cout << Arr[i] << " ";
    }
}
