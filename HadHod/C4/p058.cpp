#include <iostream>
#include <string>
using namespace std;
string ReadPin();
bool Login();

int main()
{
    if(Login())
    {
        cout << "Your Balance is $7500\n";
    }
    else
        cout << "Card Blocked Contact Bank\n";
}
string ReadPin()
{
    string Pin;
    cout << "Enter PIN : \n";
    cin >> Pin;
    return Pin;
}
bool Login()
{
    int i = 3;
    string Pin = " ";
    while(i >= 1 && Pin != "1234")
    {
        i--;
        Pin = ReadPin();
        if(Pin == "1234")
            return true;
        else
            cout << "Wrong Pin :( You Have " << i << " More Trials\n";
    }
    return false;
}
