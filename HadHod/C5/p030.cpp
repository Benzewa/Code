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
    for(int i = 'A';i <= 'C';i++)
    {
        for(int j = 'A';j <= 'C';j++)
        {
            for(int k = 'A';k <= 'C';k++)
            {
                cout << (char)i << (char)j << (char)k;
                cout << "\n";
            }
        }
    }
}
