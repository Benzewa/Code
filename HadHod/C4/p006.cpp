#include<iostream>
#include<string>
using namespace std;

int ReadAge(void);
string HasLicense(void);
void IsHired(int Age, string License);
void PrintInfo(int Age, string License);

int main(void)
{
	string License = HasLicense();
	int Age = ReadAge();

	PrintInfo(Age, License);
	IsHired(Age, License);
	return 0;
}

int ReadAge(void)
{
	int Age = 0;
	cout << "Please Enter Age\n";
	cin >> Age;
	return Age;
}

string HasLicense(void)
{
	string HasLicense;
	cout << "Do you have driving license ?\n";
	getline (cin, HasLicense);
	return HasLicense;
}

void IsHired(int Age, string License)
{
	if (Age > 21 && (License=="YES"||License=="Yes"||License=="yes"))
		cout << "Hired\n";
	else
		cout << "Sorry you dont FIT\n";
}

void PrintInfo(int Age, string License)
{
	cout << "Your age is " << Age << "\n";
	cout << "License status is " << License << "\n";
}
