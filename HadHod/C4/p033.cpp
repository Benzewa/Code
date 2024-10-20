//Sum Even Numbers
#include <iostream>
using namespace std;
enum enEvenOdd{Even = 0, Odd = 1};

void ReadNum(int &Num);
enEvenOdd Check(int Num);
int SumEven(int Num);
void Print(int Num);

int main()
{
    int Num = 0;
    ReadNum(Num);
    Print(SumEven(Num));
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
int SumEven(int Num)
{
    int Sum = 0;
    for (int i = 0 ; i <= Num ; i++)
    {
        if (Check(i) == Even)
            Sum += i;
    }
    return Sum;
}
void Print(int Num)
{
    cout << "Sum of Even is : " << Num << "\n";
}
