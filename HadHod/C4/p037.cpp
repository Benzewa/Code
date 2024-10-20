#include <iostream>
#include <string>

using namespace std;
int main()
{
    int Num = 0;
    cin >> Num;
    int Pow = 0;
    cin >> Pow;
    int Times = 1;
    for (int i = 0 ; i < Pow ; i++)
    {
        Times = Num * Times;
    }
    cout << Times;
}
int ReadNum(string Message)
{
}
