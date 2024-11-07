//Read Number And Print it in Reverse
//C5 Problem 5

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Msg);
void RevPrint(int Num);

int main()
{
    RevPrint(ReadNum("Please Enter Num : "));
}
int ReadNum(string Msg)
{
    int Num = 0;
    cout << Msg;
    cin >> Num;
    return Num;
}
void RevPrint(int Num)
{
    int Rem = 0;
    for(;Num > 0;)
    {
        Rem = Num % 10;
        cout << Rem << " ";
        Num = Num / 10; 
    }
}
