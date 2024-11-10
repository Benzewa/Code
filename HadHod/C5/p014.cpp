// C5 vid 8
// count Freq of A number in a number

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Msg);
int Count(int Num, int Find);

int main()
{
    int Number = ReadNum("Please Enter Num : ");
    int Digit = ReadNum("Enter Digit : ");

    cout << "Digit " << Digit << "\nFrequency : " << Count(Number, Digit) <<
        " Times\n";
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
int Count(int Num, int Find)
{
    int Counter = 0;
    int Rem = 0;
    for(;Num > 0;)
    {
        Rem = Num % 10;
        Num /= 10;
        if (Find == Rem)
            Counter++;
    }
    return Counter;
}
