// Vid 21 C5
// Generate Random Keys

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int Random(int From, int To);
string GenWord();
string GenKey();

int main()
{
    srand((unsigned)time(NULL));
    cout << GenKey();
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
string GenWord()
{
    string Word = "";
    for (int i = 0; i <= 3; i++)
    {
        Word = Word + char(Random(65, 90));
    }
    return Word;
}
string GenKey()
{
    string Key = "";
    Key = GenWord() + "-";
    Key = Key + GenWord() + "-";
    Key = Key + GenWord() + "-";
    Key = Key + GenWord();
    return Key;
}
