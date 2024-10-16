#include<iostream>
using namespace std;

void ReadNums(int &Length, int &Width);
int CalculateArea(int Length, int Width);
void Print(int Length, int Width, int Area);

int main(void)
{
    int Length = 0, Width = 0, Area = 0;
    ReadNums(Length, Width);
    Area = CalculateArea(Length, Width);
    Print(Length, Width, Area);
    return 0;
}
void ReadNums(int &Length, int &Width)
{
    cout << "Please Enter Lenght\n";
    cin >> Length;
    cout << "Please Enter Width\n";
    cin >> Width;
}
int CalculateArea(int Length, int Width)
{
    return Length * Width;
}
void Print(int Length, int Width, int Area)
{
    cout << Length << " * " << Width << " => Area : " << Area << "\n";
}
