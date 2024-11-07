//Sum of Digits
//C5 vid 6
#include <iostream>
#include <string>

using namespace std;

int ReadNum(string Msg);
int SumDigits(int Num);
void Print(string Msg1, int Num2, string Msg2, int Num);
int main()
{
    int Num = ReadNum("Please Enter Num : ");
    Print("Sum of ", Num, " is : ",SumDigits(Num));
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
int SumDigits(int Num)
{
    int Rem = 0;
    int Sum = 0;
    for(;Num > 0;)
    {
        Rem = Num % 10;
        Sum += Rem;
        Num /= 10;
    }
    return Sum;
}
void Print(string Msg1, int Num2, string Msg2, int Num)
{
    cout << Msg1 << Num2 << Msg2 << Num;
}
