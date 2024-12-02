//C6 vid 9
//Exercises
//1-Program to Check Neg Or Pos ternary
//2-Program to Check zero Pos or Neg Nested Ternary

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Random(int From,int To);
void PosOrNeg(int Num);
void PosOrNegOrZero(int Num);

int main()
{
    srand((unsigned)time(NULL));
    int Num = Random(-5,5);
    cout << Num << "\n";
    PosOrNeg(Num);
    PosOrNegOrZero(Num);
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void PosOrNeg(int Num)
{
    (Num >= 0) ? cout << "Positive\n" : cout << "Negative\n";
}
void PosOrNegOrZero(int Num)
{
    (Num < 0) ? cout << "Negative\n" : (Num == 0) ? cout << "Zero\n" : cout << "Positive\n";
}
