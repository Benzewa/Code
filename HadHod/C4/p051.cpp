// Task In Seconds
#include <iostream>
using namespace std;

struct stDuration
{
    int Days = 0;
    int Hours = 0;
    int Minutes = 0;
    int Seconds = 0;
};

void Read(int &Num, string Message);
double Calc(int Days, int Hours, int Minutes, int Seconds);
void Print(double Num);

int main()
{
    Print(Calc(Days, Hours, Minutes, Seconds));
}
void Read(int &Num, string Message)
{
    cout << Message;
    cin >> Num;
}
stDuration ReadDuration()
{
    stDuration Duration;
    cout << "Enter Days : ";
    cin >> Duration.Days;
    cout << "Enter Hours : ";
    cin >> Duration.Hours;
    cout << "Enter Minutes : ";
    cin >> Duration.Minutes;
    cout << "Enter Seconds : ";
    cin >> Duration.Seconds;
    return Duration;
}
double Calc(int Days, int Hours, int Minutes, int Seconds)
{
    return (24*60*60*Days)+(60*60*Hours)+(60*Minutes)+Seconds;
}
void Print(double Num)
{
    cout << Num;
}
