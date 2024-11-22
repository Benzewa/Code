// Vid 47 C5
// MyRound Function

#include <iostream>
#include <string>

using namespace std;
float ReadNum(string Message);
bool isPositive(float Num);
int MyRound(float Num1);


//int MyRoundNeg(float Num1);
int main()
{
    float Num = 0;
    for(int i = 0;i <= 5;i++)
    {
        Num = ReadNum("Please Enter Num : ");
        cout << MyRound(Num) << "\n";
    }
}
float ReadNum(string Message)
{
    float Num = 0;
    cout << Message;
    cin >> Num;
    return Num;
}
bool isPositive(float Num)
{
    if(Num >= 0)
        return true;
    return false;
}
int MyRound(float Num1)
{
    if(isPositive(Num1))
    {
        int Num2 = 0;
        float Temp = 0;
        Num2 = Num1;
        Temp = Num1 - Num2;
        if(Temp >= 0.5)
        {
            Num2++;
        }
        return Num2;
    }
    else
    {
        int Num2 = 0;
        float Temp = 0;
        Num2 = Num1;
        Temp = Num1 - Num2;
        if(abs(Temp) >= 0.5)
        {
            Num2--;
        }
        return Num2;
    }
    return Num1;
}
