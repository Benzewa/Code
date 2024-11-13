// vid 19 C5
// Generated Random in Range

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int Random(int From, int To);
void Print(int From, int To);
int ReadNum(string Msg);

int main()
{
    srand((unsigned)time(NULL));
    int From = ReadNum("Please Enter A Num : ");
    int To = ReadNum("Please Enter A Num : ");
    Print(From, To);
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void Print(int From, int To)
{
    for (int i = 1; i <= 50; i++)
    {
        printf("%02d ", Random(From, To));
        if (i % 5 == 0)
            cout << "\n";
    }
}
int ReadNum(string Msg)
{
    int Num = 0;
    while (Num <= 0)
    {
        cout << "Please Enter A Positive Number\n";
        cin >> Num;
    }
    return Num;
}