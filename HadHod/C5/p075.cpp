// GenKeys and store it in an array
// vid 33 C5
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From,int To);
string GenWord();
string GenKey();
void FillArr(string Arr[100],int &ArrSize);
void PrintArr(string Arr[100],int ArrSize);
int main()
{
    srand((unsigned)time(NULL));
    string Arr[100] = {};
    int ArrSize = 0;
    FillArr(Arr,ArrSize);
    PrintArr(Arr,ArrSize);
    
}
int ReadNum(string Message)
{
    int Num = 0;
    while(Num <= 0)
    {
        cout << "PLease Enter Num : ";
        cin >> Num;
    }
    return Num;
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
string GenWord()
{
    string Word = "";
    Word = Word + char(Random(65,90));
    Word = Word + char(Random(65,90));
    Word = Word + char(Random(65,90));
    Word = Word + char(Random(65,90));
    return Word;
}
string GenKey()
{
    string Key = "";
    Key = "{" + Key + GenWord() + "-";
    Key = Key + GenWord() + "-";
    Key = Key + GenWord() + "-";
    Key = Key + GenWord() + "-";
    Key = Key + GenWord() + "}";
    return Key;
}
void FillArr(string Arr[100],int &ArrSize)
{
    ArrSize = ReadNum("PLease Enter ArrSize : ");
    while(ArrSize > 100)
    {
        ArrSize = ReadNum("PLease Enter ArrSize : ");
    }
    for(int i = 0;i < ArrSize;i++)
    {
        Arr[i] = GenKey();
    }
}
void PrintArr(string Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        cout << "Arr[" << i << "] : "<< Arr[i] << "\n";
    }
}
