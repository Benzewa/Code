// Vid 21 C5
// Generate Random KEys

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

enum enType{Small, Capital, Symbol, Digit};

int Random(int From, int To);
int ReadNum(string Msg);
char GetRandChar(enType Type);
string GenWord(enType Type, int Length);
string GenKey();
void PrintKey();

int main()
{
    srand((unsigned)time(NULL));
    PrintKey();
}
int ReadNum(string Msg)
{
    int Num = 0;
    for(;Num <= 0;)
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
string GenWord(enType Type, int Length)
{
    string Word = "";
    for(int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandChar(Type);
    }
    return Word;
}
string GenKey()
{
    string Key = "";
    for(int i = 1; i <= 5; i++)
    {
        if(i == 1)
            Key = "{" + Key;
        Key = Key + GenWord(Capital, 5);
        if(i < 5)
            Key = Key + " - ";
        if(i == 5)
            Key = Key + "}";
    }
    return Key;
}
void PrintKey()
{
    int Num = ReadNum("How Many Keys YOu want to create\n");
    for(int i = 1;i <= Num; i++)
    {
        printf("Key [%02d] : ", i);
        cout << GenKey() << "\n";
    }
}
