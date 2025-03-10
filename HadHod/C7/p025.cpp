// vid 16
// program that check if Matrix is a sparce Matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void PrintArray(int Arr[3][3], int Rows, int Cols);
bool isSparce(int Arr[3][3], int Rows, int Cols);
int ArrElementsCount(int Arr[3][3], int Rows, int Cols);
int CountNum(int Arr[3][3], int Rows, int Cols, int Num);

int main()
{
    srand((unsigned)time(NULL));

    int ArrOne[3][3] = {{1, 2, 3}, {1, 0, 0}, {0, 0, 0}};
    PrintArray(ArrOne, 3, 3);
    if (isSparce(ArrOne, 3, 3))
        std::cout << "Array is Sparce\n";
    else
        std::cout << "Array Not Sparce\n";
}
void PrintArray(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            std::cout << std::setw(3) << Arr[i][j] << " ";
        }
        printf("\n");
    }
}
bool isSparce(int Arr[3][3], int Rows, int Cols)
{
    // MatrixSize = Rows * Cols;
    if (CountNum(Arr, 3, 3, 0) >= (ArrElementsCount(Arr, 3, 3) / 2))
        return (true);
    return (false);
}
int ArrElementsCount(int Arr[3][3], int Rows, int Cols)
{
    int Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Counter += 1;
        }
    }
    return (Counter);
}
int CountNum(int Arr[3][3], int Rows, int Cols, int Num)
{
    int Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Num == Arr[i][j])
                Counter += 1;
        }
    }
    return (Counter);
}