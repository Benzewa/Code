// vid 11 C5
// isPalindrome

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Msg);
int Reverse(int Num);
bool IsPalindrome(int Num);

int main()
{
    int Num = ReadNum("Please Enter Number : ");
    if(IsPalindrome(Num))
        cout << "Is A Palindrome.\n";
    else
        cout << "Is Not A Palindrome.\n";
}
int ReadNum(string Msg)
{
    int Num = 0;
    for(;Num <= 0;)
    {
        cout << Msg ;
        cin >> Num;
    }
    return Num;
}
int Reverse(int Num)
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
    return (Reverse(Num) == Num);
}
