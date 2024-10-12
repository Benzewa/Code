#include <iostream>
using namespace std;
enum enPass
{
    Fail,
    Pass
};
int ReadMark();
enPass Check(int Num);
void PrintRes(enPass Result);
int main(void)
{
    PrintRes(Check(ReadMark()));
    return 0;
}
int ReadMark()
{
    int Num;
    cout << "Please enter Mark";
    cin >> Num;
    return Num;
}
enPass Check(int Num)
{
    if (Num >= 50)
        return Pass;
    else 
        return Fail;
}
void PrintRes(enPass Result)
{
    if (Result == Fail)
        cout << "You Failed\n";
    else
        cout << "You Passed\n";
}