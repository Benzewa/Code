#include<iostream>
using namespace std;

enum enNumType{Even = 0, Odd = 1};

int ReadNum(void);
enNumType CheckEvenOrOdd(int Num);
void PrintNumType(enNumType NumType);
int main(void)
{
	PrintNumType(CheckEvenOrOdd(ReadNum()));

	return(0);
}
int ReadNum(void)
{
	int Num = -1;
	while (Num < 0)
	{
		cout << "Please Enter A number\n";
		cin >> Num;
	}
	return Num;
}
enNumType CheckEvenOrOdd(int Num)
{
	if(Num % 2 == 0)
		return enNumType::Even;
	else
		return enNumType::Odd;
}
void PrintNumType(enNumType NumType)
{
	if(NumType == enNumType::Even)
		cout<<"Even\n";
	else
		cout<<"Odd\n";
}
