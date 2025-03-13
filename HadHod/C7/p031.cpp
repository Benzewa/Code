// vid 21
// program that prints the fibonacci sequence

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void Fibonacci(int Number);

int main()
{
    Fibonacci(10);
}
// 1 1 2 3 5 8 13
void Fibonacci(int Number)
{
    int Prev1 = 0;
    int Prev2 = 0;
    int FabNum = 0;
    std::cout << "1 ";
    for (int i = 2; i <= Number; i++)
    {
        FabNum = Prev1 + Prev2;
        std::cout << FabNum << " ";
        Prev1 = Prev2;
        Prev2 = FabNum;
    }
}