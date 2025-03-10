// vid 14
// program that Check if the matrix is a Diagonal Matrix
// Diagonal numbers are equal and the rest are zeros

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

bool CheckDiagonal(int Arr[3][3], int Rows, int Cols);
int main()
{
    // int ArrOne[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 2}};
    int ArrOne[3][3] = {{5, 0, 0}, {0, 5, 0}, {0, 0, 5}}; // Diagonal Matrix
    if (CheckDiagonal(ArrOne, 3, 3))
        printf("Diagonal Matrix\n");
    else
        printf("Not a Diagonal Matrix\n");
}
bool CheckDiagonal(int Arr[3][3], int Rows, int Cols)
{
    int Diagonal = Arr[0][0];
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (!(((i == j) && (Arr[i][j] == Diagonal)) || (i != j) && (Arr[i][j] == 0)))
            {
                return (false);
            }
        }
    }
    return (true);
}