#include <iostream>
#include <string>
using namespace std;

struct TaskDuration
{
    int Days;
    int Hours;
    int Mins;
    int Sec;
};
int ReadPositive(string Message);
TaskDuration Convert(int TotSec);
void Print(TaskDuration Task);
int main()
{
    Print(Convert(ReadPositive("Please Enter Num of Seconds : ")));
}
int ReadPositive(string Message)
{
    int i = -10;
    for (; i <=0 ;)
    {
        cout << Message;
        cin >> i;
    }
    return i;
}
TaskDuration Convert(int TotSec)
{
    TaskDuration Task;
    const int SecPerDay  = 24*60*60;
    const int SecPerHour = 60*60;
    const int SecPerMin  = 60;

    int Rem = 0;
    Task.Days = floor(TotSec / SecPerDay);
    Rem = TotSec % SecPerDay;
    Task.Hours = floor(Rem / SecPerHour);
    Rem = Rem % SecPerHour;
    Task.Mins = floor(Rem / SecPerMin);
    Rem = Rem % SecPerMin;
    Task.Sec = Rem;
    return Task;
}
void Print(TaskDuration Task)
{
    cout << "Num OF Days : " << Task.Days << "\n";
    cout << "Num OF Hours : " << Task.Hours << "\n";
    cout << "Num OF Minutes : " << Task.Mins << "\n";
    cout << "Num OF Seconds : " << Task.Sec << "\n";
    cout << Task.Days<<":"<<Task.Hours<<":"<<Task.Mins<<":"<<Task.Sec<<"\n";
}
