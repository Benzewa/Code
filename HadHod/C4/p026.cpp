#include<iostream>
using namespace std;

int ReadAge(void);
bool Validate(int Num, int From, int To);
void Print(int Age);

int main(void)
{
    Print(ReadAge());
}
int ReadAge(void)
{
    int Age = 0;
    cout << "Enter Your Age\n";
    cin >> Age;
    return Age;
}
bool Validate(int Num, int From, int To)
{
    if (Num >= From && Num <= To)
        return true;
    else
        return false;
}
void Print(int Age)
{
    if(Validate(Age, 18, 45))
        cout << "Age : " << Age << " is Valid ";
    else
        cout << "Age : " << Age << " is not Valid ";
}
