// C5 vid 9
// All Numbers Frequency

#include<iostream>
#include<string>
using namespace std;

int ReadNum(string Msg);
int Count(int Num, int Digit);
void Print(int Num);

int main(void)
{
    Print(ReadNum("Please Enter Num : "));
}
int ReadNum(string Msg)
{
    int Num = -10;
    for (;Num <= 0;)
    {
        cout << Msg;
        cin >> Num;
    }
    return Num;
}
int Count(int Num, int Digit)
{
    int Rem = 0;
    int Counter = 0;
    for(;Num > 0;)
    {
        Rem = Num % 10;
        Num /= 10;
        if(Rem == Digit)
            Counter++;
    }
    return Counter;
}
void Print(int Num)
{
    for (int i = 0;i <= 9;i++)
    {
        if(Count(Num, i) != 0)
            cout << i << " : " << Count(Num,i) << "\n";
    }
}
