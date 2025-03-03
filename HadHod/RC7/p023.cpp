// vid 15
// Program that counts a number in a matrix

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int Random(int From, int To);
int main()
{
    srand((unsigned)time(NULL));
}
int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}
void FillArr(int Arr[3][3], int Rows, int Cols)
{
}