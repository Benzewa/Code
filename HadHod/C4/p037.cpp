#include <iostream>
#include <string>
using namespace std;
void ReadNum(int &Num, string Message);
int CalcPower(int Num, int Power);
void Print(int Num);
int main()
{
    int Num = 0;
    ReadNum(Num, "Please Enter   Num");
    int Pow = 0;

    ReadNum(Pow, "Please Enter Power");
    Print(CalcPower(Num, Pow));

    ReadNum(Pow, "Please Enter Power");
    Print(CalcPower(Num, Pow));

    ReadNum(Pow, "Please Enter Power");
    Print(CalcPower(Num, Pow));
}
void ReadNum(int &Num, string Message)
{
    cout << Message << " : ";
    cin >> Num;
}
int CalcPower(int Num, int Power)
{
    if (Power == 0)
        return 1;

    int Times = 1;
    for (int i = 0 ; i < Power ; i++)
    {
        Times = Times * Num;
    }
    return Times;
}
void Print(int Num)
{
    cout << "The  Solution   is : " << Num << "\n";
}
