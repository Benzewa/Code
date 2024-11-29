//main.cpp
#include <iostream>
#include <string>
#include <cstdio>
#include "source.hpp"
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    int Num1 = 30,Num2 = 14;
    cout << "Addition       of " << Num1 << " and " << Num2 << " : " << Add(Num1,Num2) << "\n";
    cout << "Subtraction    of " << Num1 << " and " << Num2 << " : " << Sub(Num1,Num2) << "\n";
    cout << "Multiplication of " << Num1 << " and " << Num2 << " : " << Mult(Num1,Num2) << "\n";
    cout << "Division       of " << Num1 << " and " << Num2 << " : " << Div(Num1,Num2) << "\n";
    for(int i = 0;i < 10;i++)
        cout << Random(1,99) << " ";
    return 0;
}
