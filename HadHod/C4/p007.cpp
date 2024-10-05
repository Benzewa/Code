#include <iostream>
using namespace std;

struct stInfo
{
	int Age;
	bool License;
};

stInfo ReadInfo();
bool IsHired(stInfo Info);
void PrintRes(bool B);

int main(void)
{
	PrintRes(IsHired(ReadInfo()));
}
stInfo ReadInfo()
{
	stInfo Info;
	cout<<"Please enter your Age\n";
	cin>>Info.Age;
	int LicenseInput = 0;
	cout<<"do you have a driving license? (1 = true) (0 = false)\n";
	cin>>LicenseInput;
	Info.License = (LicenseInput == 1);
	return Info;
}
bool IsHired(stInfo Info)
{
	if (Info.Age > 18 && Info.License == 1)
		return true;
	else
		return false;
}
void PrintRes(bool B)
{
	if (B == 1)
		cout<<"You are Hired";
	else if (B == 0)
		cout<<"You are not Hired";
}
