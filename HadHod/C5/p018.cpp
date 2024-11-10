// vid 10 C5
// print Num in same Order

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Message);
int RevNum(int Num);
void PrintDigits(int Num);

int main()
{
    PrintDigits(RevNum(ReadNum("Please Enter Num : ")));
}
int ReadNum(string Message)
{
    int Num = 0;
    for(;Num <= 0;)
    {
        cout << Message;
        cin >> Num;
    }
    return Num;
}
int RevNum(int Num)
{
    int Rem = 0;
    int RevNum = 0;
    for(;Num > 0;)
    {
        Rem = Num % 10;
        Num /= 10;
        RevNum += Rem;
        if(Num > 0)
            RevNum *= 10;
    }
    return RevNum;
}
void PrintDigits(int Num)
{
    int Rem = 0;
    for(;Num > 0;)
    {
        Rem = Num % 10;
        cout << Rem << "\n";
        Num = Num / 10;
    }
}
