// 25 min
// Pay Remainder
#include <iostream>
#include <string>
using namespace std;
int ReadNum(string Message);
int CalcNum(int Num1, int Num2);
void Print(int Num, string Message);
int main()
{
    Print(CalcNum(ReadNum("Please Enter Total Bill : "),
    ReadNum("Please EnterCash Paid : ")), "Your Change is : ");
}
int ReadNum(string Message)
{
    int Num = 0;
    cout << Message;
    cin >> Num;
    for(; Num < 0 ;)
    {
        cout << "Please Enter A Positive Number";
        cin >> Num;
    }
    return Num;
}
int CalcNum(int Num1, int Num2)
{
    return Num2 - Num1;
}
void Print(int Num, string Message)
{
    cout << Message << Num;
}
