#include<iostream>
//pow 
//sqrt
// pi * r squared

double ReadRadius(double &Radius);
double CalcArea(double Radius);
void PrintArea(double Num);

int main(void)
{
    double Radius = 0;

    PrintArea(CalcArea(ReadRadius(Radius)));
    return 0;
}
double ReadRadius(double &Radius)
{
    cout << "Enter Radius\n";
    cin >> Radius;
    return Radius;
}
double CalcArea(double Radius)
{
    const double PI = 3.141592653589793238;
    return PI * pow(Radius, 2);
}
void PrintArea(double Num)
{
    cout << "Circle Area is : " << Num << "\n";
}
