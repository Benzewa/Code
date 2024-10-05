#include<iostream>
#include<string>
using namespace std;

string ReadName(void);
void PrintName(string Name);

int main(void)
{
	PrintName(ReadName());
}
string ReadName(void)
{
	string Name;
	cout<<"Enter Your Name\n";
	getline(cin, Name);
	return Name;
}
void PrintName(string Name)
{
	cout<<"Hello " << Name << "\n";
}
