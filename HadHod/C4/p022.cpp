#include <iostream>
//pow(2,3) = 8
//sqrt(16) = 4

using namespace std;

void ReadInfo(double &SideArea, double &Diagonal);
double CalcArea(double SideArea, double Diagonal);
void PrintArea(double Area);
int main(void)
{
    double SideArea = 0, Diagonal = 0, Area = 0;
    ReadInfo(SideArea, Diagonal);
    Area = CalcArea(SideArea, Diagonal);
    PrintArea(Area);
	return 0;
}
void ReadInfo(double &SideArea, double &Diagonal)
{
    cout << "Enter Side Area\n";
    cin >> SideArea;
    cout << "Enter Diagonal Length\n";
    cin >> Diagonal;
}
double CalcArea(double SideArea, double Diagonal)
{
    return SideArea * sqrt(pow(Diagonal, 2) - pow(SideArea, 2));
}
void PrintArea(double Area)
{
    cout << "Area : " << Area << "\n"; 
}
