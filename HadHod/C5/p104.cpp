// Vid 50 C5
// My Sqrt
#include <iostream>
#include <string>
using namespace std;
float ReadNum(string Message);
float MySqrt(float Num);
int main()
{
    float Num = 0;
    for(int i = 0;i < 10;i++)
    {
        Num = ReadNum("Please Enter Num : ");
        cout << "MY Sqrt : " << MySqrt(Num) << "\n";
        cout << "Cpp Sqrt : " << sqrt(Num) << "\n";
    }
}
float ReadNum(string Message)
{
    float Num = 0;
    cout << Message;
    cin >> Num;
    return Num;
}
float MySqrt(float Num)
{
    return pow(Num,0.5);
}
