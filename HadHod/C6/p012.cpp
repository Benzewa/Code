// Vid 19 C6
// Recursion in Cpp
// Print Nums From 1 to N
// Recursion is often used instead of loops

#include <iostream>

void Print(int i,int Num);

int main()
{
    Print(1,10);
}
void Print(int i,int Num)
{
    std::cout << i;
    i++;
    if(i < Num)
        Print(i,Num);
}
