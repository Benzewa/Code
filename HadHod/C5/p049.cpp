// Vid 21 C5
// Generate Random KEys

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
int ReadNum(string Msg);
char GetRandChar(enType Type);
string GenWord(enType Type, int Length);
string GenKey();
void GenKeys(int NumOfKeys);

int main()
{
    srand((unsigned)time(NULL));
    GenKeys(ReadNum("How Many Keys : "));
}
int ReadNum(string Msg)
{
    int Num = 0;
    for (; Num <= 0;)
    {
        cout << Msg;
        cin >> Num;
    }
    return Num;
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
char GetRandChar(enType Type)
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
    }
}
string GenWord(enType Type, int Length)
{
    string Word = "";
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandChar(Type);
    }
    return Word;
}
string GenKey()
{
    string Key = "";
    Key = "{" + Key + GenWord(Capital, 5) + " - ";
    Key = Key + GenWord(Capital, 5) + " - ";
    Key = Key + GenWord(Capital, 5) + " - ";
    Key = Key + GenWord(Capital, 5) + " - ";
    Key = Key + GenWord(Capital, 5) + "}";
    return Key;
}
void GenKeys(int NumOfKeys)
{
    for (int i = 1; i <= NumOfKeys; i++)
    {
        printf("Key [%02d] : ", i);
        cout << GenKey() << "\n";
    }
}
