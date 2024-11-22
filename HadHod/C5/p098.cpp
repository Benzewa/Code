// Vid 47 C5
// My Round Function

#include <iostream>
#include <string>

using namespace std;
float ReadNum(string Message);
float GetFractionPart(float Num);
int GetIntPart(float Num);
int MyRound(float Num);

int main()
{
    float Num = 0;
    for(int i = 0;i < 10;i++)
    {
        Num = ReadNum("Please Enter Num : ");
        cout << "My Round : " << MyRound(Num) << "\n";
        cout << "Cpp Round : " << round(Num) << "\n";
    }
}
float ReadNum(string Message)
{
    float Num = 0;
    cout << Message;
    cin >> Num;
    return Num;
}
float GetFractionPart(float Num)
{
    return Num - int(Num);
}
int GetIntPart(float Num)
{
    return int(Num);
}
int MyRound(float Num)
{
    int IntPart = GetIntPart(Num);
    float FractionPart = GetFractionPart(Num);
    if(abs(FractionPart) >= 0.5)
    {
        if(Num > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
        return IntPart;
}
