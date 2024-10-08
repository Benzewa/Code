#include <iostream>
#include <string>
using namespace std;

enum enPass
{
	Pass,
	Fail
};

int ReadNum(void);
enPass Check(int Num);
void PrintRes(int enPass);

int main(void)
{

	PrintRes(ReadNum());
	return 0;
}
int ReadNum(void)
{
	int Num = 0;
	cout << "Please ENter Num\n";
	cin >> Num;
	return Num;
}
enPass Check(int Num)
{
	if (Num == 0)
		return enPass::Pass;
	else
		return enPass::Fail;
}
void PrintRes(int enPass)
{
	if (Check(enPass) == enPass::Pass)
		cout << "You Passed\n";
	else
		cout << "You failed\n";

	switch (Check(enPass))
	{
	case 0:
		cout << "You Passed\n";
		break;
	case 1:
		cout << "You Failed\n";
		break;
	default:
		cout << "None\n";
		break;
	}
}