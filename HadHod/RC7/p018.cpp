// vid 13
// Program that check if a matrix is an identity matrix ?

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int To);
void FillMatrix(int Arr[3][3], int Rows, int Cols);
void PrintMatrix(int Arr[3][3], int Rows, int Cols);
bool CheckIdentity(int Arr[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3] = {0};
    FillMatrix(Arr, 3, 3);
    PrintMatrix(Arr, 3, 3);
    if (CheckIdentity(Arr, 3, 3))
        std::cout << "Identity\n";
    else
        std::cout << "Non-Identity\n";
}
int Random(int From, int To)
{
    return ((rand() % (To - From + 1) + From));
}
void FillMatrix(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == j)
                Arr[i][j] = 1;
            else
                Arr[i][j] = 0;
        }
    }
}
void PrintMatrix(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            std::cout << Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
bool CheckIdentity(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == j && Arr[i][j] != 1)
                return (false);
            else if (i != j && Arr[i][j] != 0)
                return (false);
        }
    }
    return (true);
}