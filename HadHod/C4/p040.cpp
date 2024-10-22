#include <iostream>
#include <string>
using namespace std;

struct stBank
{
    double Penny;
    double Nickel;
    double Dime;
    double Quarter;
    double Dollar;
};

stBank ReadBankMem();
double CalcTot(stBank Bank);
void Print(double Num);

int main(void)
{
    Print(CalcTot(ReadBankMem()));
}
stBank ReadBankMem()
{
    stBank Bank;
    cout << "How many Pennies ?";
    cin >> Bank.Penny;
    cout << "How Many Nickels ?";
    cin >> Bank.Nickel;
    cout << "How Many   Dimes ?";
    cin >> Bank.Dime;
    cout << "How Many Quarters?";
    cin >> Bank.Quarter;
    cout << "How Many Dollars ?";
    cin >> Bank.Dollar;
    return Bank;
}
double CalcTot(stBank Bank)
{
    return (Bank.Penny * 1)+(Bank.Nickel * 5)+(Bank.Dime * 10)+(Bank.Quarter *
            25)+(Bank.Dollar * 100);
}
void Print(double Num)
{
    cout << "Total Pennies : " << Num << "\n";
    cout << "Total Dollars : " << (Num / 100) << "\n";
}
