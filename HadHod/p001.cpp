#include <iostream>
#include <string>
using namespace std;
void PrintName(string Name);
int main(void)
{
	PrintName("Farah");
	return (0);
}
void PrintName(string Name)
{
	cout<<"Hello "<< Name << "\n";
}
