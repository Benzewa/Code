#include<iostream>
using namespace std;

// -pow-
// -sqrt-
// pi * r squared

void ReadRadius(double &Radius);
double CalcArea(double Radius);
void PrintArea(double Num);

int main(void)
{
    double Radius = 0;
    ReadRadius(Radius);
    PrintArea(CalcArea(Radius));
    return 0;
}
void ReadRadius(double &Radius)
{
    cout << "Enter Radius\n";
    cin >> Radius;
}
double CalcArea(double Radius)
{
    // -const cannot be changed-
    const double PI = 3.141592653589793238;
    return PI * pow(Radius, 2);
}
void PrintArea(double Num)
{
    cout << "Circle Area is : " << Num << "\n";
}
