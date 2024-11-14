// print random small letter , capital letter, symbol and Digit
// vid 20 C5

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enType{Small = 0, Capital = 1, Symbol = 2, Digit = 3};

int Random(int From, int To);
char GetRandChar(enType Type);
int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandChar(Small) << "\n";
    cout << GetRandChar(Capital) << "\n";
    cout << GetRandChar(Symbol) << "\n";
    cout << GetRandChar(Digit) << "\n";
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
char GetRandChar(enType Type)
{
    switch(Type)
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
    }
}
