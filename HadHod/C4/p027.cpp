//dont go on until entered age is between 18 && 45
// ternary Operator
// condition ? expression1 : expression2
// return Condition ? return1 : return2 

#include <iostream>
using namespace std;

int ReadAge(void);
void Print(int Age);

int main(void)
{
    Print(ReadAge());
    return 0;
}
bool Validate(int Num, int From, int To)
{
    return (Num >= From && Num <= To) ? true : false;
}
int ReadAge(void)
{
    int Age = 0;
    cout << "Please Enter Age\n";
    cin >> Age;
    while(!(Validate(Age, 18, 45)))
    {
        cout << "Wrong its not between 18 and 45\n";
        cin >> Age;
    }
    return Age;
}
void Print(int Age)
{
    cout << "You are " << Age <<" years Old\n";
}
