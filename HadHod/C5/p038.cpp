// Vid 19 C5
// Generate Random Num

#include <iostream>
#include <string>
#include <cstdlib>

int Random(int From, int To);

using namespace std;
int main()
{
    // Seeds The random number Generator in Cpp
    srand((unsigned)time(NULL));
    //cout << rand();
    for(int i = 0;i <= 30;i++)
    {
        cout << Random(1, 5) << " ";
    }
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
