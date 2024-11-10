// vid 11 Course C5
// isPalindrome

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Msg);
int RevNum(int Num);
bool IsPalindrome(int Num);
void Print(bool Result);

int main()
{
    Print(IsPalindrome(RevNum(ReadNum("Please Enter Num : "))));
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
int RevNum(int Num)
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
bool IsPalindrome(int Num)
{
    return Num == RevNum(Num);
}
void Print(bool Result)
{
    if(Result)
        cout << "Num is Palindrome.\n";
    else
        cout << "Num is Not Palindrome.\n";
}
