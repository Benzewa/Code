#include <iostream>
#include <string>

using namespace std;

string Read(string Message);
bool Check(string Pin);
void Print(bool Pin);

int main()
{
    Print(Check(Read("Please Enter Pin")));
}
string Read(string Message)
{
    string Pin;
    cout << "Please Enter PIN-CODE :";
    cin >> Pin;
    return Pin;
}
bool Check(string Pin)
{

    if (Pin == "1234")
        return true;
    else
        return false;
}
void Print(bool Pin)
{
    if (Pin == true)
        cout << "You Have 7500\n";
    else
        cout << "Wrong Pin\n";
}
