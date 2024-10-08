#include <iostream>
#include <string>
//to_string changes from to string format
using namespace std;

int ReadNum(void);
float CalcHalf(int Num);
void PrintNum(int Num);

int main(void)
{
	PrintNum(ReadNum());
	return 0;
}
int ReadNum(void)
{
	int Num;
	cout << "Please enter a Num\n";
	cin >> Num;
	return Num;
}
float CalcHalf(int Num)
{
	return (float)Num / 2.0;
}
void PrintNum(int Num)
{
	cout << "half of " << to_string(Num) << " is " << to_string(CalcHalf(Num)) << "\n";
}
