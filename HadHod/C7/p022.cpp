// vid 13
// program that Check if the matrix is an Identity Matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

bool CheckIdentity(int Arr[3][3], int Rows, int Cols);
int main()
{
    int ArrOne[3][3] = {{1, 0, 0}, {0, 1, 0}, {1, 0, 1}};
    // int ArrOne[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}; // Identity Matrix
    if (CheckIdentity(ArrOne, 3, 3))
        printf("Identity Matrix\n");
    else
        printf("Not an Identity Matrix\n");
}
bool CheckIdentity(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (!(((i == j) && (Arr[i][j] == 1)) || (i != j) && (Arr[i][j] == 0)))
            {
                return (false);
            }
        }
    }
    return (true);
}