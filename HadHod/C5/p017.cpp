// vid 10 C5
// Read Number and Print In same Order
#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Msg);
int Reverse(int Num);
//int Revert(int Num);
void Print(int Num);

int main()
{
    Print(Reverse(ReadNum("Please Enter A Num : ")));
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
int Reverse(int Num)
{
    int RevNum = 0;
    int Rem = 0;
    while(Num > 0)
    {
        Rem = Num % 10;
        RevNum += Rem;
        Num /= 10;
        if(Num != 0)
            RevNum *= 10;
    }
    return RevNum;
}
//int Revert(int Num)
//{
//    int RevNum = 0;
//    int Rem = 0;
//    while(Num > 0)
//    {
//        Rem = Num % 10;
//        RevNum += Rem;
//        Num /= 10;
//        if(Num != 0)
//            RevNum *= 10;
//    }
//    return RevNum;
//}
void Print(int Num)
{
    int Rem = 0;
    for(;Num > 0;)
    {
        Rem = Num % 10;
        cout << Rem << "\n";
        Num /= 10;
    }
}
