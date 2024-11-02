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
    cout<<GetDay(Check());
}
int Read(string Message)
{
    int i = 0;
    for (;i < 1 || i > 7;)
    {
        cout << Message << "\n";
        cin >> i;
    }
    return i;
}
enDay Check()
{
    return (enDay)Read("Please Enter Day : "); //casting
}
string GetDay(enDay Day)
{
    if(Day == 1)
        return "SunDay";
    else if(Day == 2)
        return "MonDay";
    else if(Day == 3)
        return "TuesDay";
    else if(Day == 4)
        return "WednesDay";
    else if(Day == 5)
        return "ThursDay";
    else if(Day == 6)
        return "FriDay";
    else
        return "SaturDay";
}
