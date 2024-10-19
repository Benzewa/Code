// sum of odd nums for N to 1

#include <iostream>
using namespace std;

int ReadNum();
void Print(int Num);
int ForSumOdd(int Num);
int WhileSumOdd(int Num);

int main(void)
{
    Print(ForSumOdd(ReadNum()));
    cout << "\n";
    Print(WhileSumOdd(ReadNum()));
}
int ReadNum()
{
    int Num = 0;
    cout << "Enter Num : ";
    cin >> Num;
    return Num;
}
int ForSumOdd(int Num)
{
    int Sum = 0;
    cout << "for Loop\n";
    for (int i = Num ; i >= 0 ; i--)
    {
        if(i % 2 != 0)
            Sum += i;
    }
    return Sum;
}
int WhileSumOdd(int Num)
{
    cout << "while Loop\n";
    int Sum = 0;
    int i = Num;
    while (i >= 0)
    {
        if(i % 2 != 0)
            Sum += i;
        i--;
    }
    return Sum;
}
void Print(int Num)
{
    cout << "Sum : " << Num;
}
