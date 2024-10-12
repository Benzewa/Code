#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};
stInfo ReadInfo();
string GetFullName(stInfo Info);
void PrintName(string Name);
int main(void)
{
    PrintName(GetFullName(ReadInfo()));
    return 0;
}
stInfo ReadInfo()
{
    stInfo Info;
    cout << "What is YOur first Name\n";
    getline(cin, Info.FirstName);
    cout << "What is YOur Last Name\n";
    getline(cin, Info.LastName);
    return Info;
}
string GetFullName(stInfo Info)
{
    string FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}
void PrintName(string Name)
{
    cout << "The full name is " << Name << "\n";
}