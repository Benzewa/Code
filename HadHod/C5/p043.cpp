#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

enum enType{Small = 0, Capital = 1, Symbol = 2, Digit = 3};

int Random(int From, int To);
enType Read();

int main()
{
    cout << "Hello World\n";
    srand((unsigned)time(NULL));

    cout << char(Random(97, 122)) << " ";
    cout << char(Random(65, 90)) << " ";
    cout << char(Random(33, 47)) << " ";
    cout << Random(0, 9) << " ";
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
enType Read()
{
    enType Type;
    int Num == -1;
    for(;!(Num >= 0 && Num <= 3);)
    {
        cout << "(Small : 0) (Capital : 1) (Symbol : 2) (Digit : 3)\n";
        cin >> Num;
    }
    Type = (enType)Num;
    return Type;
}
