#include <iostream>
#include <string>
using namespace std;

enum enPrime
{
    Prime = 0,
    NonPrime = 1
};

int ReadPositiveNumber(string Message);
enPrime Check(int Number);
void Print(int Num);

int main()
{
    Print(ReadPositiveNumber("Please Enter A Positive Number : "));
    return 0;
}

int ReadPositiveNumber(string Message)
{
    int Num = -10;
    for (; Num != -99 ;)
    {
        cout << Message << "\n";
        cin >> Num;
        if(Num == -99)
            return 0;
        if (Num > 0)
            return Num;
    }
    return Num;
}

enPrime Check(int Number)
{
    int Counter = 0;
    for(int i = Number ; i > 1 ; i--)
    {
        if(Number % i == 0)
            Counter++;
    }
    if(Number > 1)
        return NonPrime;
    else
        return Prime;
}

void Print(int Num)
{
    if(Check(Num) == 0)
        cout << "Prime";
    else
        cout << "NON Prime";
}
