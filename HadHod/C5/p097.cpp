// vid 47 C5
// MY Round Function
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
float ReadNum(string Message);
int MyRound(float Num);
float GetFraction(float Num);
int main()
{
    float Num = 0;
    for (int i = 0; i < 10; i++)
    {
        Num = ReadNum("Please enter Num : ");
        cout << "My  Round function : " << MyRound(Num) << "\n";
        cout << "C++ Round Function : " << round(Num) << "\n";
    }
}
float ReadNum(string Message)
{
    float Num = 0;
    cout << Message;
    cin >> Num;
    return Num;
}
int MyRound(float Num)
{
    int IntPart = int(Num);
    float FractionPart = GetFraction(Num);
    if (abs(FractionPart) >= 0.5)
    {
        if (Num > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
        return IntPart; // this also handles the zero
    return 0;           // this also handles the zero
}
float GetFraction(float Num)
{
    return Num - int(Num);
}
