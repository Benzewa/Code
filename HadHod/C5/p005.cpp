// Check Perfect
#include <iostream>
using namespace std;

int ReadNum();
void Print(int Num);
int CheckSum(int Num);

int main()
{
    Print(ReadNum());
}
int ReadNum()
{
    int Num = -1;
    for(;Num <= 0;)
    {
        cout << "Enter A Positive Number : ";
        cin >> Num;
    }
    return Num;
}
void Print(int Num)
{
    if (CheckSum(Num) == Num)
        cout << "Perfect Number\n";
    else
        cout << "Not Perfect Number\n";
}
int CheckSum(int Num)
{
    int Sum = 0;
    for (int i = Num - 1 ; i >= 1 ; i--)
    {
        if (Num % i == 0)
            Sum+=i;
    }
    return Sum;
}
