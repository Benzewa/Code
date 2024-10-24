#include <iostream>
using namespace std;
enum enPrime
{
    Prime = 0,
    NonPrime = 1
};

void ReadNum(int &Num);
enPrime CheckPrime(int Num);
void Print(int Num);

int main()
{
    int Num = 0;
    ReadNum(Num);
    Print(Num);
    return 0;
}
enPrime CheckPrime(int Num)
{
    int Counter = 0;
    for(int i = Num ; i > 1 ; i--)
    {
        if(Num % i)
            Counter++;
    }
    if (Counter != 1)
        return NonPrime;
    return Prime;
}
void Print(int Num)
{
    switch (CheckPrime(Num))
    {
        case Prime:
            cout << "Prime Number\n";
            break;
        case NonPrime:
            cout << "Non - Prime\n";
            break;
        default:
            cout << "Error\n";
            break;
    }
}
void ReadNum(int &Num)
{
    Num = 0;
    for (;Num<=0;)
    {
        cout << "Enter Number\n";
        cin >> Num;
    }
}
