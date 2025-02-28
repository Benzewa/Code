// vid 1
// Fill Random 3 x 3 matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int main()
{
    srand((unsigned)time(NULL));
}
int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}
void FillArr(int Arr[3][3], int Rows,int Cols)