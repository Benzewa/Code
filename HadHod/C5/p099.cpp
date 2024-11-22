// Vid 48 C5
// My Floor Function
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
float ReadNum(string Message);
int GetInt(float Num);
float GetFraction(float Num);
int MyFloor(float Num);
int main()
{
    float Num = 0;
    for(int i = 0;i < 10;i++)
    {
        Num = ReadNum("Please Enter Num : ");
        cout << "MY Floor : " << MyFloor(Num) << "\n";
        cout << "Cpp Floor : " << floor(Num) << "\n";
    }
}
float ReadNum(string Message)
{
    float Num = 0;
    cout << Message;
    cin >> Num;
    return Num;
}
int GetInt(float Num)
{
    return int(Num);
}
float GetFraction(float Num)
{
    return Num - GetInt(Num);
}
int MyFloor(float Num)
{
    int IntPart = GetInt(Num);
    float FractionPart = GetFraction(Num);
    if(Num > 0)
        return IntPart;
    else if(Num < 0)
        return --IntPart;
    return IntPart;
}
