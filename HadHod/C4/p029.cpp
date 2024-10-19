//print from N to 1 (N is taken as input)

#include <iostream>
using namespace std;

int ReadNum();
void ForPrint(int Num);
void WhilePrint(int Num);

int main(void)
{
    ForPrint(ReadNum());
    cout << "\n";
    WhilePrint(ReadNum());
}
int ReadNum()
{
    int Num = 0;
    cout << "Enter Num : ";
    cin >> Num;
    return Num;
}
void ForPrint(int Num)
{
    cout << "for Loop\n";
    for (int i = Num ; i >= 0 ; i--)
    {
        cout << i << " ";
    }
}
void WhilePrint(int Num)
{
    cout << "while Loop\n";
    int i = Num;
    while (i >= 0)
    {
        cout << i << " ";
        i--;
    }
}
