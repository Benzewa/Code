// vid 15 C5
// Print Alphabet Pattern

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Msg);
void Print(int Num);

int main()
{
    Print(ReadNum("Please Enter Num : "));
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
void Print(int Num)
{
    for(int i = 65;i <= Num + 64;i++)
    {
        for(int j = 65;j <= i;j++)
        {
            cout << (char)i << " ";
        }
        cout << "\n";
    }
}
