#include <iostream>
using namespace std;
enum enEvenOdd{Even = 0, Odd = 1};

void ReadNum(int &Num);
enEvenOdd Check(int Num);
int SumOdd(int Num);
void Print(int Num);

int main()
{
    int Num = 0;
    ReadNum(Num);
    Print(SumOdd(Num));
}
void ReadNum(int &Num)
{
    cout << "Enter Num\n";
    cin >> Num;
}
enEvenOdd Check(int Num)
{
    if (Num % 2 == 0)
        return Even;
    else
        return Odd;
}
int SumOdd(int Num)
{
    int Sum = 0;
    for (int i = 0 ; i <= Num ; i++)
    {
        if (Check(i) == Odd)
            Sum += i;
    }
    return Sum;
}
void Print(int Num)
{
    cout << "Sum of Odd is : " << Num << "\n";
}
