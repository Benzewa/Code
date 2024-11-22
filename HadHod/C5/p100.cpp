// Vid 48 C5
// My Floor Function
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
float ReadNum(string Message);
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
int MyFloor(float Num)
{
    if(Num > 0)
        return int(Num);
    return int(Num) - 1;
}
