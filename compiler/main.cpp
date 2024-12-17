//main.cpp
#include <iostream>
#include <string>
#include <cstdlib> // For srand()
#include <ctime> // For time()
#include "source.hpp"
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));
    int Num1 = MathFun::Random(20,25),Num2 = MathFun::Random(10,15);
    cout << "Addition       of " << Num1 << " and " << Num2 << " : " << MathFun::Add(Num1,Num2) << "\n";
    cout << "Subtraction    of " << Num1 << " and " << Num2 << " : " << MathFun::Sub(Num1,Num2) << "\n";
    cout << "Multiplication of " << Num1 << " and " << Num2 << " : " << MathFun::Mult(Num1,Num2) << "\n";
    cout << "Division       of " << Num1 << " and " << Num2 << " : " << MathFun::Div(Num1,Num2) << "\n";
    for(int i = 0;i < 10;i++)
        cout << MathFun::Random(1,99) << " ";
    cout << "\n";
    cout << "Hello World\n";
    return 0;
}
