// Problem 36 C5
// Semi - Dynamic Array

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Message);
void FillArr(int Arr[100],int &ArrSize);
bool Check(int Num);
void PrintArr(int Arr[100],int ArrSize);

int main()
{
    int Arr[100] = {};
    int ArrSize = 1;
    FillArr(Arr,ArrSize);
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
void FillArr(int Arr[100],int &ArrSize)
{
    cout << "Please Enter Num \n";
    int Num = 0;
    cin >> Num;
    Arr[0] = Num;

    for(int i = 0;i < ArrSize;i++)
    {
        cout << "Do You Want to Add More Number ? [0] No, [1] YEs\n";
        cin >> Num;
        if(Check(Num))
        {
            cout << "Enter Num : ";
            cin >> Arr[i + 1];
        }
        else
            break;
        ArrSize++;
    }
}
bool Check(int Num)
{
    return (Num) ? true:false;
}
void PrintArr(int Arr[100],int ArrSize)
{
    int Counter = 0;
    for(int i = 0;i < ArrSize;i++)
    {
        Counter++;
        cout << Arr[i] << " ";
    }
    cout << "\n";
    cout << Counter << " Elements";
}
