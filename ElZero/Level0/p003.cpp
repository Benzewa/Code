#include <iostream>
using namespace std;
bool Div(int Num,int ByX, int ByY);
int main()
{
    int Num = 17;
    int ByX = 2;
    int ByY = 4;
    if(Div(Num,ByX,ByY))
        cout << "It is divisible\n";
    else
        cout << "Its nOt Divisible\n";
}
bool Div(int Num,int ByX, int ByY)
{
    return (Num % ByX == 0) && (Num % ByY == 0);
}
