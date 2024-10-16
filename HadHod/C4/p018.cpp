#include <iostream>
using namespace std;
//max of 3 nums
enum enMax
{
    First  = 0,
    Second = 1,
    Third  = 2,
    Tie    = 3
};

void ReadNum(int &Num1, int &Num2, int &Num3);
enMax Check(int Num1, int Num2, int Num3);
void Print(int Max);

int main(void)
{
    int Num1 = 0, Num2 = 0, Num3 = 0;
	ReadNum(Num1, Num2, Num3);
	Print(Check(Num1, Num2, Num3));
}
void ReadNum(int &Num1, int &Num2, int &Num3)
{
    cout << "Enter Num1\n";
    cin >> Num1;
    cout << "Enter Num2\n";
    cin >> Num2;
    cout << "Enter Num3\n";
    cin >> Num3;
}
enMax Check(int Num1, int Num2, int Num3)
{
    if ((Num1 > Num2) && (Num1 > Num3))
		return First;
    else if ((Num2 > Num1) && (Num2 > Num3))
        return Second;
    else if ((Num3 > Num1) && (Num3 > Num2))
        return Third;
	else
		return Tie;
}
void Print(int Max)
{
    switch(Max)
	{
		case 0:
			cout << "The First Num\n";
			break;	
		case 1:
			cout << "The Second Num\n";
			break;
		case 2:
			cout << "The Third Num\n";
			break;
		case 3:
			cout << "Tie\n";
			break;
	}
}
