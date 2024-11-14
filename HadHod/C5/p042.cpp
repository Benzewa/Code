// vid 19 C5
// Print 3 Random Numbers From 1 to 10

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void PrintRandomInRange(int From, int To);
int Random(int From, int To);

int main()
{
    srand((unsigned)time(NULL));
    PrintRandomInRange(195, 200);
}
void PrintRandomInRange(int From, int To)
{
    for (int i = 1; i <= 3; i++)
    {
        cout << Random(From, To) << "\n";
    }
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}