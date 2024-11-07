// Print All Perfect Numbers from 1 to N
// Course 5 Problem 4

#include <iostream>
#include <string>

using namespace std;
int ReadNum(string Msg);
bool IsPerfect(int Num);
void PerfectNumFrom1ToN(int Num);
int main()
{
    PerfectNumFrom1ToN(ReadNum("Enter Positive Num : "));
}
int ReadNum(string Msg)
{
    int Num = -10;
    for(;Num <= 0;)
    {
        cout << Msg;
        cin >> Num;
    }
    return Num;
}
bool IsPerfect(int Num)
{
    int Sum = 0;
    for(int i = Num - 1;i > 0;i--)
    {
        if(!(Num % i))
        {
            Sum += i;
        }
    }
    return Sum == Num;
    //return true if Sum == Num
}
void PerfectNumFrom1ToN(int Num)
{
    for(int i = 1; i <= Num ; i++)
    {
        if(IsPerfect(i) == true)
            cout << i << "\n";
    }
}
