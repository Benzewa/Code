// vid 16 C5
// Print AAA to ZZZ

#include <iostream>
#include <string>
using namespace std;

void Print();

int main()
{
    Print();
}
void Print()
{
    string Word = "";
    for(int i = 65;i <= 67;i++)
    {
        for(int j = 65;j <= 67;j++)
        {
            for(int k = 65;k <= 67;k++)
            {
                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);
                cout << Word << "\n";
                Word = "";
            }
        }
    }
}
