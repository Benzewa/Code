#include <iostream>
using namespace std;
void PrintHeader();
string ColumnSep(int i);
void PrintBody();
int main()
{
    PrintBody();
}
void PrintHeader()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
    cout << "\t";

    int i = 1;
    while(i <= 10)
    {
        cout << i << "\t";
        i++;
    }
    cout << "\n____________________________________________________________________________________\n";
}
string ColumnSep(int i)
{
    if(i < 10)
        return "    |";
    else
        return "   |";
}
void PrintBody()
{
    PrintHeader();
    int i = 1;
    while(i <= 10)
    {
        cout << i << " " << ColumnSep(i) << "\t";
        int j = 1;
        while(j <= 10)
        {
            cout << i * j << "\t";
            j++;
        }
        i++;
        cout << "\n";
    }
}
