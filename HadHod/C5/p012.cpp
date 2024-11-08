// Print Reverse of Number as A different Number not print in reverse
//C5 vid 7
//still not done
#include <iostream>
#include <string>

using namespace std;

int ReadNum(string Msg);
int Reversed (int Num);
void Print(int Num, string Msg2);

int main()
{
    int Num = ReadNum("Please Enter Num : ");
    int Num2 = Reversed(Num);
    Print(Num, "Num : ");
    printf("\n");
    Print(Num2, "Reversed Num : ");
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
int Reversed (int Num)
{
    int Rem = 0;
    int RevNum = 0;
    for(;Num > 0;)
    {
        Rem = Num % 10;
        Num /= 10;
        RevNum = RevNum * 10 + Rem;
    }
    return RevNum;
}
void Print(int Num, string Msg2)
{
    cout << Msg2 << Num << " ";
}
