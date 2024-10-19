// sum of odd nums for 1 to N

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
    for (int i = 0 ; i <= Num ; i++)
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
    int i = 0;
    while (i <= Num)
    {
        if(i % 2 != 0)
            Sum += i;
        i++;
    }
    return Sum;
}
void Print(int Num)
{
    cout << "Sum : " << Num; 
}
