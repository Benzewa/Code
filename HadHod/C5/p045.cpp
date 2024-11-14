// vid 20 C5
// Randon Small, Capital, Symbol, Digit

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

enum enType
{
    Small,
    Capital,
    Symbol,
    Digit
};

int Random(int From, int To);
char GetRandom(enType Type);

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandom(Small) << "\n";
    cout << GetRandom(Capital) << "\n";
    cout << GetRandom(Symbol) << "\n";
    cout << GetRandom(Digit) << "\n";
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
char GetRandom(enType Type)
{
    switch (Type)
    {
    case Small:
        return char(Random(97, 122));
        break;
    case Capital:
        return char(Random(65, 90));
        break;
    case Symbol:
        return char(Random(33, 47));
        break;
    case Digit:
        return char(Random(48, 57));
        break;
    default:
        return 0;
        break;
    }
}
