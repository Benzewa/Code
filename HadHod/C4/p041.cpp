//Simple Calculator
#include <iostream>
#include <string>
using namespace std;
enum enOperator{Add = '+',Subtract = '-',Multi = '*',Div = '/'};
void ReadNum(double &Num, string Message);
enOperator ReadOperator();
double Calculator(double Num1, double Num2, enOperator Operator);
void Print(double Num);
int main()
{
    double Num1 = 0, Num2 = 0;
    ReadNum(Num1, "Please Enter First Num ");
    ReadNum(Num2, "Please Enter Second Num ");
    enOperator Operator = ReadOperator();
    Print(Calculator(Num1, Num2, Operator));
    return 0;
}
void ReadNum(double &Num, string Message)
{
    cout << Message;
    cin >> Num;
}
enOperator ReadOperator()
{
    char Operator;
    cout << "Addition = '+'  Subtract = '-'  Multi = '*'  Div = '/'\n";
    cin >> Operator;
    return (enOperator)Operator;
}
double Calculator(double Num1, double Num2, enOperator Operator)
{
    switch(Operator)
    {
        case Add:
            return Num1 + Num2;
            break;
        case Subtract:
            return Num1 - Num2;
            break;
        case Multi:
            return Num1 * Num2;
            break;
        case Div:
            return Num1 / Num2;
            break;
        default:
            return 5;
            break;
    }
}
void Print(double Num)
{
    cout << "Result : " << Num;
}
