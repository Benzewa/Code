#include <iostream>
using namespace std;
int ReadNum();
double CalcHalf(int Num);
void PrintRes(double Num);
int main(void)
{
    PrintRes(CalcHalf(ReadNum()));
}
int ReadNum()
{
    int Num;
    cout << "Please enter the num\n";
    cin >> Num;
    return Num;
}
double CalcHalf(int Num)
{
    return Num / 2.0;
}
void PrintRes(double Num)
{
    cout << "The half of Num : " << Num << "\n";
}
