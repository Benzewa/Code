// vid 49 C5
// My Ceil
#include <iostream>
#include <string>
using namespace std;
float ReadNum(string Message);
int MyCeil(float Num);
float GetFraction(float Num);
int main()
{
    float Num = 0;
    for(int i = 0;i < 10;i++)
    {
        Num = ReadNum("Please Enter Num : ");
        cout << "My Ceil  : " << MyCeil(Num) << "\n";
        cout << "Cpp Ceil : " << ceil(Num) << "\n";
    }
}
float ReadNum(string Message)
{
    float Num = 0;
    cout << Message;
    cin >> Num;
    return Num;
}
int MyCeil(float Num)
{
    if(abs(GetFraction(Num)) > 0)
    {
        if(Num > 0)
            return int(Num) + 1;
        else if(Num < 0)
            return int(Num);
    }
    return Num;
}
float GetFraction(float Num)
{
    return Num - int(Num);
}
