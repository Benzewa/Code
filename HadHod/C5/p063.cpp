#include <iostream>
#include <cstdio>
using namespace std;
bool IsPrime(int Num);
int main()
{
    for(int i = 0;i < 20;i++)
    {
        if(IsPrime(i))
        {
            printf("%02d ",i);
            cout << "Prime\n";
        }
    }
}
bool IsPrime(int Num)
{
    int Counter = 0;
    for(int i = 0;i <= Num;i++)
    {
        if(Num % i == 0)
            Counter++;
    }
    if(Counter == 2)
        return true;
    else
        return false;
}

