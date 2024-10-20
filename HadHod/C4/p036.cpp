
// Factorial of N

#include <iostream>
#include <string>

using namespace std;

int ReadNum(string Message);
int Fact(int Num);
void Print(int Num);

int main()
{
    Print(Fact(ReadNum("Enter a Positive Num")));
}
int ReadNum(string Message)
{
    int Num = 0;
    while (Num <= 0)
    {
        cout << Message << "\n";
        cin >> Num;
    }
    return Num;
}
int Fact(int Num)
{
    int Fact = 1;
    for(int i = Num ; i > 0 ; i--)
    {
        Fact = Fact * i;
    }
    return Fact;
}
void Print(int Num)
{
    cout << "The Factorial is : " << Num << "\n";
}
