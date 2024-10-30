#include <iostream>
#include <string>
using namespace std;

enum enDay
{
    Sun = 1,Mon = 2,Tue = 3,Wed = 4,Thr = 5,Fri = 6,Sat = 7,Invalid = 8
};

int Read(string Message);
enDay Check(int Num);
void Print(enDay Day);

int main()
{
    Print(Check(Read("Please Enter Day")));
}
int Read(string Message)
{
    int i = -10;
    for (;i<=0;)
    {
        cout << Message << "\n";
        cin >> i;
    }
    return i;
}
enDay Check(int Num)
{
    switch(Num)
    {
        case 1:
            return Sun;
            break;
        case 2:
            return Mon;
            break;
        case 3:
            return Tue;
            break;
        case 4:
            return Wed;
            break;
        case 5:
            return Thr;
            break;
        case 6:
            return Fri;
            break;
        case 7:
            return Sat;
            break;
        default:
            return Invalid;
            break;
    }
}
void Print(enDay Day)
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
