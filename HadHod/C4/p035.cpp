
// Factorial of N

#include <iostream>
#include <string>

using namespace std;

//fact of 5 =       5 - 0   *   5 - 1   *   5 - 2   *   5 - 3   *   5 - 4

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
    for(int i = 0 ; i < Num ; i++)
    {
        Fact = Fact * (Num - i);
    }
    return Fact;
}
void Print(int Num)
{
    cout << "The Factorial is : " << Num << "\n";
}
