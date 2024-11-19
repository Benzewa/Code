// Vid 33 C5
// Store Generated Keys in an Array
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
int ReadNum(string Msg);
int Random(int From, int To);
char GetRandChar(enType Type);
string GenWord(enType Type, int Length);
string GenKey();
void FillArrWithKeys(string Arr[100], int ArrSize);
void PrintArr(string Arr[100], int ArrSize);

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    string Arr[100] = {};
    int ArrSize = 0;
    ArrSize = ReadNum("PLease Enter Arr Size : ");
    if (ArrSize > 100)
    {
        ArrSize = 100;
    }
    FillArrWithKeys(Arr, ArrSize);
    PrintArr(Arr, ArrSize);
}
int ReadNum(string Msg)
{
    int Num = 0;
    while (Num <= 0)
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
    default:
        return '\0';
    }
}
string GenWord(enType Type, int Length)
{
    string Word = "";
    for (int i = 0; i < Length; i++)
    {
        Word = Word + GetRandChar(Type);
    }
    return Word;
}
string GenKey()
{
    string Key = "";
    Key = Key + GenWord(Capital, 5) + "-";
    Key = Key + GenWord(Capital, 5) + "-";
    Key = Key + GenWord(Capital, 5) + "-";
    Key = Key + GenWord(Capital, 5) + "-";
    Key = Key + GenWord(Capital, 5);
    return Key;
}
void FillArrWithKeys(string Arr[100], int ArrSize)
{
    for (int i = 0; i < ArrSize; i++)
    {
        Arr[i] = GenKey();
    }
}
void PrintArr(string Arr[100], int ArrSize)
{
    for (int i = 0; i < ArrSize; i++)
    {
        cout << Arr[i] << "\n";
    }
}
