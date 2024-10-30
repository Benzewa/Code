#include <iostream>
#include <string>
using namespace std;
enum enDay
{
    Sun = 1,Mon = 2,Tue = 3,Wed = 4,Thr = 5,Fri = 6,Sat = 7
};
int Read(string Message);
enDay Check();
string GetDay(enDay Day);
int main()
{
}
int Read(string Message)
{
    int i = 10;
    for (;i <= 1 && i <= 7;)
    {
        cout << Message << "\n";
        cin >> i;
    }
    return i;
}
enDay Check()
{
    return (enDay)Read("Please Enter Day : ");
}
string GetDay(enDay Day)
{
    if(Day == 1)
        cout << "SunDay";
    else if(Day == 2)
        cout << "MonDay";
    else if(Day == 3)
        cout << "TuesDay";
    else if(Day == 4)
        cout << "WednesDay";
    else if(Day == 5)
        cout << "ThursDay";
    else if(Day == 6)
        cout << "FriDay";
    else if(Day == 7)
        cout << "SaturDay";
    else if(Day == 8)
        cout << "InValid";
}
