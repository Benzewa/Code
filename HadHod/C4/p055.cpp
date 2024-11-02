// Print Letter From A to Z
#include <iostream>
#include <string>
using namespace std;
void PrintChars();
void PrintNums();
int main()
{
    PrintChars();
    PrintNums();
}
void PrintChars()
{
    for (char i = 'A' ; i <= 'Z' ; i++)
    {
        cout << i << "\n";
    }
}
void PrintNums()
{
    for (int i = 65 ; i <= 90 ; i++)
    {
        cout << (char)i;
    }
}
