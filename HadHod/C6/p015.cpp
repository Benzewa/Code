// vid 19
// Recursion to Print Numbers from M down to N

#include <iostream>
void Print(int Num1,int Num2);
int main()
{
    Print(10,1);
}
void Print(int Num1,int Num2)
{
    if(Num1 >= Num2)
    {
        if(Num1 == Num2)
            std::cout << Num1;
        else
            std::cout << Num1 << " ";

        // Recursion
        Print(Num1 - 1,Num2);
    }
}
