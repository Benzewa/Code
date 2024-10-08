#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo();
string GetFullName(stInfo Info, bool Reverse);
void PrintName(string FullName);

int main(void)
{
	PrintName(GetFullName(ReadInfo(), false));
}

stInfo ReadInfo()
{
	stInfo Info;
	cout<<"Please Enter First Name\n";
	getline(cin, Info.FirstName);
	cout<<"Please Enter Last Name\n";
	getline(cin, Info.LastName);
	return Info;
}
string GetFullName(stInfo Info, bool Reverse)
{
	// + concatunation
	string FullName;
	if (Reverse)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}
void PrintName(string FullName)
{
	cout << FullName;
}
