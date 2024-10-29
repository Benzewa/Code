// Task In Seconds
#include <iostream>
#include <string>
using namespace std;

struct stDuration
{
    int Days;
    int Hours;
    int Minutes;
    int Seconds;
};

int Read(string Message);
stDuration ReadDuration();
double Calc(stDuration Task);
void Print(double Num);

int main()
{
    Print(Calc(ReadDuration()));
}
int Read(string Message)
{
    int Num = -10;
    for (;Num < 0;)
    {
        cout << Message;
        cin >> Num;
    }
    return Num;
}
stDuration ReadDuration()
{
    stDuration Duration;
    Duration.Days = Read("Please Enter Num Of Days : ");
    Duration.Hours = Read("Please Enter Num Of Hours : ");
    Duration.Minutes = Read("Please Enter Num Of Minutes : ");
    Duration.Seconds = Read("Please Enter Num Of Seconds : ");
    return Duration;
}
double Calc(stDuration Task)
{
    return(24*60*60*Task.Days)+(60*60*Task.Hours)+(60*Task.Minutes)+Task.Seconds;
}
void Print(double Num)
{
    cout << Num;
}
