// Vid 20 C5
// Randon Small , CApital, Symbol, Number

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

enum enType
{
    Small = 0,
    Capital = 1,
    Symbol = 2,
    Digit = 3
};

int Random(int From, int To);
enType Read();
void Print(enType Type);

int main()
{
    cout << "Hello World\n";
    srand((unsigned)time(NULL));
    Print(Read());
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
enType Read()
{
    enType Type;
    int Num = -1;
    for (; !(Num >= 0 && Num <= 3);)
    {
        cout << "(Small : 0) (Capital : 1) (Symbol : 2) (Digit : 3)\n";
        cin >> Num;
    }
    Type = (enType)Num;
    return Type;
}
void Print(enType Type)
{
    switch (Type)
    {
        case 0:
            cout << char(Random(97, 122));
            break;
        case 1:
            cout << char(Random(65, 90));
            break;
        case 2:
            cout << char(Random(33, 47));
            break;
        case 3:
            cout << Random(0, 9);
            break;
        default:
            cout << "Invalid Input";
            break;
    }
}
