// vid 19 C5
// Generate Random in Range

#include <iostream>
#include <string>
#include <cstdlib> //For Random
#include <cstdio>  //Printf
using namespace std;

int Random(int From, int To);
void Print(int From, int To);

int main()
{
    // Seed
    srand((unsigned)time(NULL));
    printf("\n");
    Print(1, 5);
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void Print(int From, int To)
{
    for (int i = 1; i <= 50; i++)
    {
        printf("Random %.2d : %d\n", i, Random(From, To));
        if ((i % 5) == 0)
            cout << "\n";
    }
}
