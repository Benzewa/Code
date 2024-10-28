//Service Fee and Sales Tax
#include<iostream>
#include<string>
using namespace std;

void ReadNum(double &Num);
double CalculateService(double Num);
void Print(double Num);

int main()
{
    double BillValue;
    ReadNum(BillValue);
    Print(BillValue);
}
void ReadNum(double &Num)
{
    cout << "Please Enter A Number : ";
    cin >> Num;
}
double CalculateService(double Num)
{
    double Service = (Num * 0.1) + 100;
    return  (Service * 0.16) + Service;
}
void Print(double Num)
{
    cout << "Total Cost : " << CalculateService(Num);
}
