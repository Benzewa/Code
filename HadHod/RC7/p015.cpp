// vid 11
// Compare Two matrices and check if the Sum is equal or not (return)

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
int ArrSum(int Arr[3][3], int Rows, int Cols);
bool AreTheyEqual(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);

int main()
{
    int ArrOne[3][3] = {0};
    int ArrTwo[3][3] = {0};
    // FillArr(ArrOne, 3, 3);
    if (AreTheyEqual(ArrOne, ArrTwo, 3, 3))
        std::cout << "They are Equal.\n";
    else
        std::cout << "They are Not Equal!!\n";
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
            Arr[i][j] = Random(0, 2);
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
int ArrSum(int Arr[3][3], int Rows, int Cols)
{
    int Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Sum += Arr[i][j];
        }
    }
    return (Sum);
}
bool AreTheyEqual(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols)
{
    return (ArrSum(ArrOne, 3, 3) == ArrSum(ArrTwo, 3, 3));
}