// Print Perfect Numbers from 1 to N
#include <iostream>
using namespace std;

int ReadNum();
void Print(int Num);
int IsPerfect(int Num);

int main()
{

}
int ReadNum()
{
    int Num = -10;
    for(;!(Num >= 1);)
    {
        cout << "Enter A Positive Num : ";
        cin >> Num;
    }
    return Num;
}
bool IsPerfect(int Num)
{
    int Sum = 0;
    for(int i = Num; i < Num ; i++)
    {
        if(Num % i == 0)
            Sum += i;
    }
    return Sum == Num;
}
