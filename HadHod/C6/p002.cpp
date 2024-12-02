// C6 vid 9
// Ternary Operator (Short Hand If)

#include <iostream>
#include <string>
#include <cstdlib> //random
#include <ctime> //random
using namespace std;

int Random(int From,int To);
string Result(int Num);
int main()
{
    srand((unsigned)time(NULL));
    int Num = Random(0,100);
    cout << Num << "\n";
    cout << Result(Num);
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
string Result(int Num)
{
    string Result;
    Result = (Num >= 50) ? "Pass\n" : "Fail\n";
    return Result;
}
