// Print All Prime Nums from 1 to N
#include <iostream>
using namespace std;

short ReadNum();
void Print(short Num);
bool CheckPrime(short Num);

int main()
{
    Print(ReadNum());
}
short ReadNum()
{
    short Num = -1;
    for(;Num <= 0;)
    {
        cout << "Enter A Positive Number : ";
        cin >> Num;
    }
    return Num;
}
void Print(short Num)
{
    for (short  i = 1 ; i <= Num ; i++)
    {
        if (CheckPrime(i))
            cout << i << " ";
    }
}
bool CheckPrime(short Num)
{
    int Counter = 0;
    for (int i = Num ; i >= 1 ; i--)
    {
        if (Num % i == 0)
            Counter++;
    }
    if (Counter > 2)
        return false;
    else
        return true;
}
