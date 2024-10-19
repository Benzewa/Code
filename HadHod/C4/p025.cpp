const double PI = 3.141592653589793238;

#include<iostream>
using namespace std;

void ReadNum(double &Diameter);
double CalcArea(double Diameter);
void Print(double Num);

int main(void)
{
    double Diameter = 0;
    ReadNum(Diameter);
    Print(CalcArea(Diameter));
}
void ReadNum(double &Diameter)
{
    cout << "Enter Diameter\n";
    cin >> Diameter;
}
double CalcArea(double Diameter)
{
    return (PI * pow(Diameter, 2)) / 4.0;
}
void Print(double Num)
{
    cout << "Area is : " << Num;
}
