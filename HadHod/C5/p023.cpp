// pattern

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
    while(Num <= 0)
    {
        cout << Msg;
        cin >> Num;
    }
    return Num;
}
void Print(int Num)
{
    for(int i = 1; i <= Num;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}
