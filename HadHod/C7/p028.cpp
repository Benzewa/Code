// vid 19
// program that Prints Min/Max Numbers in the Matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
int MaxNum(int Arr[3][3], int Rows, int Cols);
int MinNum(int Arr[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));

    int Arr[3][3] = {0};
    FillArr(Arr, 3, 3);
    PrintArr(Arr, 3, 3);
    printf("\n");
    printf("Max Number : %d\n", MaxNum(Arr, 3, 3));
    printf("Min Number : %d\n", MinNum(Arr, 3, 3));
}

int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}
void FillArr(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr[i][j] = Random(10, 99);
        }
    }
}
void PrintArr(int Arr[3][3], int Rows, int Cols)
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
int MaxNum(int Arr[3][3], int Rows, int Cols)
{
    int Num = Arr[0][0];
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Arr[i][j] > Num)
                Num = Arr[i][j];
        }
    }
    return (Num);
}
int MinNum(int Arr[3][3], int Rows, int Cols)
{
    int Num = Arr[0][0];
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Arr[i][j] < Num)
                Num = Arr[i][j];
        }
    }
    return (Num);
}