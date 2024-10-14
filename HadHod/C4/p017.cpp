#include <iostream>
using namespace std;

enum enMax
{
    First,
    Second,
    Tie
};

void ReadNum(int &Num1, int &Num2);
enMax MaxNum(int Num1, int Num2);
void Print(int Num);

int main(void)
{
    int Num1 = 0, Num2 = 0;
    ReadNum(Num1, Num2);
    Print(MaxNum(Num1, Num2));
    return 0;
}
void ReadNum(int &Num1, int &Num2)
{
    cout << "Enter Num1\n";
    cin >> Num1;
    cout << "Enter Num2\n";
    cin >> Num2;
}
enMax MaxNum(int Num1, int Num2)
{
    if (Num1 > Num2)
    {
        return First;
    }
    else if (Num2 > Num1)
    {
        return Second;
    }
    else
        return Tie;
}
void Print(int Num)
{
    if (Num == First)
        cout << "Num1";
    else if (Num == Second)
        cout << "Num2";
    else
        cout << "Tie";
}
