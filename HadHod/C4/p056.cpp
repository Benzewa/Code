// Print Letter From A to Z
#include <iostream>
#include <string>
using namespace std;

void PrintNums();
int main()
{
    PrintNums();
}
void PrintNums()
{
    for (int i = 65 ; i <= 90 ; i++)
    {
        if (i == 90)
        {
            cout <<(char)i;
            break;
        }
        cout << (char)i << " ";
    }
}
