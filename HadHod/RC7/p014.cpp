// vid 11
// Compare Two matrices and check if they are equal or not (return)

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void CheckTwoMatrix(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);

int main()
{
    int ArrOne[3][3] = {0};
    int ArrTwo[3][3] = {0};
    FillArr(ArrOne, 3, 3);
    std::cout << "\n";
    PrintArr(ArrOne, 3, 3);
    PrintArr(ArrTwo, 3, 3);
    CheckTwoMatrix(ArrOne, ArrTwo, 3, 3);
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
void CheckTwoMatrix(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (ArrOne[i][j] != ArrTwo[i][j])
            {
                std::cout << "The Arrays are not equal !!";
                return;
            }
        }
    }
}