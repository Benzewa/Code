// Vid 29 C5
// Copy Only Prime Numbers

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
// Deal With Enums Like BOOLEAN

int main()
{
    srand((unsigned)time(NULL));
}
int ReadNum(string Message)
{
    int Num = 0;
    for(;Num <= 0;)
    {
        cout << Message;
        cin >> Num;
    }
    return Num;
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

