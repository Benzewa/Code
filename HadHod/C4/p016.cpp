#include <iostream>
using namespace std;

enum enPass
{
	Fail,
	Pass
};

void ReadNums(int &Num1, int &Num2, int &Num3);
int SumNums(int Num1, int Num2, int Num3);
double AvgNums(int Num1, int Num2, int Num3);
enPass Check(double Avg);
void Print(enPass Pass);

enPass Check(double Avg);

int main(void)
{
	int Num1, Num2, Num3;
	ReadNums(Num1, Num2, Num3);
	Print(Check(AvgNums(Num1, Num2, Num3)));

	return 0;
}
void ReadNums(int &Num1, int &Num2, int &Num3)
{
	cout << "Please Enter Num1\n";
	cin >> Num1;
	cout << "Please Enter Num2\n";
	cin >> Num2;
	cout << "Please Enter Num3\n";
	cin >> Num3;
}
int SumNums(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}
double AvgNums(int Num1, int Num2, int Num3)
{
	return (double)SumNums(Num1, Num2, Num3) / 3.0; // 2 ways of casting
}
enPass Check(double Avg)
{
	if (Avg >= 50)
		return Pass;
	else
		return Fail;
}
void Print(enPass Pass)
{
	if (Pass)
	{
		cout << "You Passed\n";
		cout << "value is " << Pass;
	}
	else
	{
		cout << "You Failed\n";
		cout << "value is " << Pass;
	}
}