#include<iostream>
using namespace std;

void ReadNum(double &Width, double &Height);
double Calc(double Width, double Height);
void Print(double Num);

int main(void)
{
    double Width = 0, Height = 0;
    ReadNum(Width, Height);
    Print(Calc(Width, Height));
    return 0;
}
void ReadNum(double &Width, double &Height)
{
    cout << "Please Enter Width\n";
    cin >> Width;
    cout << "Please Enter Height\n";
    cin >> Height;
}
double Calc(double Width, double Height)
{
    return 0.5 * (Width * Height);
}
void Print(double Num)
{
    cout << "The Area is : " << Num; 
}
