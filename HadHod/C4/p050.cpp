// hours to weeks and days
// 168 hour in a week
// % only works with int

#include <iostream>
#include <string>
using namespace std;

double ReadNumHours(string Message);
double CalcWeeks(double Num);
double CalcDays(double Num);
void Print(double Weeks);

int main()
{
    double Hours = ReadNumHours("How Many Hours (positive): ");
    cout << "Weeks : " << CalcWeeks(Hours) << "\n";
    cout << "Days  : " << CalcDays(Hours) << "\n";
}
double ReadNumHours(string Message)
{
    int Num = -1;
    for (;Num <= 0;)
    {
        cout << Message;
        cin >> Num;
    }
    return Num;
}
double CalcWeeks(double Num)
{
    return ((double)Num / 168);
}
double CalcDays(double Num)
{
    return (CalcWeeks(Num) * 7);
}
void Print(double Weeks)
{
    cout << "Weeks : " << Weeks;
}
