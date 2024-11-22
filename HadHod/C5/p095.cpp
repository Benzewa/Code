// Vid 46 C5
// Program to find Abs of Number (Absolute)
// check using built-in abs function

#include <iostream>
using namespace std;
int ReadNum(string Message);
int MyAbs(int Num);
int main()
{
    int Num = ReadNum("Please Enter A Number : ");
    cout << "Abs of " << Num << " : " << MyAbs(Num) << "\n";
    cout << "Built-in abs of " << Num << " : " << abs(Num);
}
int ReadNum(string Message)
{
    int Num = 0;
    cout << Message;
    cin >> Num;
    return Num;
}
int MyAbs(int Num)
{
    if(Num < 0)
        return Num * -1;
    else if(Num > 0)
        return Num;
    else
        return 0;
}
