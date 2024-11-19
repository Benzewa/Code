#include <iostream>
using namespace std;
int SimpleMultiplication(int Num);
int main()
{
    cout << SimpleMultiplication(2);
    cout << "\n";
    cout << SimpleMultiplication(3);
}
int SimpleMultiplication(int Num)
{
    int Result = 0;
    if (Num % 2 == 0)
        Result = Num * 8;
    else if(Num % 2 != 0)
        Result = Num * 9;
    return Result;
}
