// vid 14 C5
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
    for (;Num <= 0;)
    {
        cout << Msg;
        cin >> Num;
    }
    return Num;
}
void Print(int Num)
{
    for(char i = Num + 'A' - 1;i >= 65;i--)
    {
        for(char j = 'A';j <= i;j++)
        {
            cout << (int)i << " ";
        }
        cout << "\n";
    }
}
