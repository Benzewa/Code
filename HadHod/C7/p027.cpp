// vid 18
// program that prints intersecting Numbers in 2 Matrices

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void PrintArr(int Arr[3][3], int Rows, int Cols);
void PrintIntersectedNumbers(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);
bool IsInArray(int Arr[3][3], int Rows, int Cols, int Number);

int main()
{
    int ArrOne[3][3] = {{77, 5, 12}, {22, 20, 1}, {1, 0, 9}};
    int ArrTwo[3][3] = {{5, 80, 5}, {22, 77, 1}, {10, 8, 33}};

    PrintIntersectedNumbers(ArrOne, ArrTwo, 3, 3);
}
void PrintArr(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf("%02d ", Arr[i][j]);
        }
        std::cout << "\n";
    }
}
void PrintIntersectedNumbers(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (IsInArray(ArrOne, 3, 3, ArrTwo[i][j]))
                std::cout << ArrTwo[i][j] << " ";
        }
    }
}
bool IsInArray(int Arr[3][3], int Rows, int Cols, int Number)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Arr[i][j] == Number)
                return (true);
        }
    }
    return (false);
}