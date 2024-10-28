// hours to weeks and days
// 168 hour in a week
// % only works with int

#include <iostream>
#include <string>
using namespace std;

double NumHours();
double CalcDays(int Num);
int CalcWeeks(double Num);
void print(int Weeks, int Days);

int main()
{
    double Hours = NumHours();
    cout <<"Weeks : "<< CalcWeeks(Hours) << " Days : " << CalcDays(Hours);
}
double NumHours()
{
    int Num;
    cout << "How Many Hours : ";
    cin >> Num;
    return Num;
}
double CalcDays(int Num)
{
    double Days = (Num % 168);
    Days = Days * 7;
    return Days;
}
int CalcWeeks(double Num)
{
    return (Num / 168);
}
void print(int Weeks, int Days)
{
    cout << "Weeks : " << Weeks << "Days : " << Days;
}
