//source.cpp
#include <cstdlib>
int Add(int Num1,int Num2)
{
    return Num1 + Num2;
}
int Sub(int Num1,int Num2)
{
    return Num1 - Num2;
}
int Mult(int Num1,int Num2)
{
    return Num1 * Num2;
}
double Div(int Num1,int Num2)
{
    return (double)Num1 / Num2;
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
