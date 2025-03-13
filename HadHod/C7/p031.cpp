// vid 21
// program that prints the fibonacci sequence

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void PrintFibonacci(int Number);

int main()
{
    PrintFibonacci(10);
}
void PrintFibonacci(int Num)
{
    int FebNum = 0;
    int PrevOne = 1;
    int PrevTwo = 0;
    std::cout << "1 ";
    for (int i = 2; i <= Num; i++)
    {
        FebNum = PrevOne + PrevTwo;
        if (i != Num)
            std::cout << FebNum << " ";
        else
            std::cout << FebNum;
        PrevTwo = PrevOne;
        PrevOne = FebNum;
    }
}