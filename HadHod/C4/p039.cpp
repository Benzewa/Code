#include <iostream>
#include <string>
using namespace std;

void ReadNum(double &Num, string Message);
double CalcTot(double Penny, double Nickel, double Dime, double Quarter, double Dollar);
void Print(double Num);

int main(void)
{
    double Penny, Nickel, Dime, Quarter, Dollar;
    ReadNum(Penny,  "How  Many  Pennies");
    ReadNum(Nickel, "How  Many  Nickels");
    ReadNum(Dime,   "How  Many    Dimes");
    ReadNum(Quarter,"How  Many Quarters");
    ReadNum(Dollar, "How  Many  Dollars");
    
    Print(CalcTot(Penny, Nickel, Dime, Quarter, Dollar));
}
void ReadNum(double &Num, string Message)
{
    cout << Message << " : ";
    cin >> Num;
}
double CalcTot(double Penny, double Nickel, double Dime, double Quarter, double Dollar)
{
    return (Penny * 1)+(Nickel * 5)+(Dime * 10)+(Quarter * 25)+(Dollar * 100);
}
void Print(double Num)
{
    cout << "Total Pennies : " << Num << "\n";
    cout << "Total Dollars : " << (Num / 100) << "\n";
}
