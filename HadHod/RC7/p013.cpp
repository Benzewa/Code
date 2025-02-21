#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int Random(int From, int To);

int main()
{
    srand((unsigned)time(NULL));
    std::cout << Random(0, 5);
}
int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}
