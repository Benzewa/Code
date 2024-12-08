// vid 19
// Recursion to Calculate N pow M (N^M)

int Power(int N,int M);
#include <iostream>
int main()
{
    std::cout << Power(2,4);
}
int Power(int N,int M)
{
    int Pow = 1;
    if(M >= 1)
    {
        Pow = N * Power(N,M - 1);
    }
    return Pow;
}
// 2 * 2 * 2
// 2^3 = 8
// 2 * 2
