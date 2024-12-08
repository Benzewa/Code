// vid 14 
// Functions Declaration VS Definition

#include <iostream>
// Declaration
int Add(int,int);
int main()
{
    std::cout << Add(5,10) << "\n";
}
// Definition
int Add(int Num1,int Num2)
{
    return Num1 + Num2;
}
