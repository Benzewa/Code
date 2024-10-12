#include <iostream>
using namespace std;

// * when reading in a function you should pass the ref
void ReadNums(int &Num1, int &Num2, int &Num3);
int Sum(int Num1, int Num2, int Num3);
void PrintRes(int Sum);
double Avg(int Num1, int Num2, int Num3);

int main(void)
{
    int Num1, Num2, Num3;
    ReadNums(Num1, Num2, Num3);
    cout<<"sum : ";
    PrintRes(Sum(Num1, Num2, Num3));
    cout<<"\nAvg : ";
    PrintRes(Avg(Num1, Num2, Num3));
    return 0;
}
void ReadNums(int &Num1, int &Num2, int &Num3)
{
    cout << "Please Enter Number1\n";
    cin >> Num1;
    cout << "Please Enter Number2\n";
    cin >> Num2;
    cout << "Please Enter Number3\n";
    cin >> Num3;
}
int Sum(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}
double Avg(int Num1, int Num2, int Num3)
{
    return Sum(Num1, Num2, Num3) / 3.0;
}
void PrintRes(int Sum)
{
    cout << Sum;
}