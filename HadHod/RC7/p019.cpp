// vid 14
// Program that check if a matrix is a Scaler Matrix ?

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
bool CheckMatrixScaler(int Arr[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3] = {{2, 0, 0}, {0, 2, 0}, {0, 0, 2}};
    // FillArr(Arr, 3, 3);
    PrintArr(Arr, 3, 3);
    if (CheckMatrixScaler(Arr, 3, 3))
        std::cout << "Scaler Matrix\n";
    else
        std::cout << "Non-Scaler Matrix\n";
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
            Arr[i][j] = Random(0, 5);
        }
    }
}
void PrintArr(int Arr[3][3], int Rows, int Cols)
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
bool CheckMatrixScaler(int Arr[3][3], int Rows, int Cols)
{
    int Flag = Arr[0][0];
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (i == j && Flag != Arr[i][j])
                return (false);
            else if (i != j && Arr[i][j] != 0)
                return (false);
        }
    }
    return (true);
}