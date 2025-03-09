// vid 12
// program that compares two matrices and check if they are Identical
// Identical Matrices (Have the same number in every index)

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
bool CheckIdenticalArrays(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrOne[3][3] = {0};
    int ArrTwo[3][3] = {0};
    bool AreIdentical = false;

    FillArr(ArrOne, 3, 3);
    printf("Array One : \n");
    PrintArr(ArrOne, 3, 3);

    // FillArr(ArrTwo, 3, 3);
    printf("Array Two : \n");
    PrintArr(ArrTwo, 3, 3);

    AreIdentical = CheckIdenticalArrays(ArrOne, ArrTwo, 3, 3);
    if (AreIdentical)
        std::cout << "The Arrays Are Identical\n";
    else
        std::cout << "The Array Are not Identical\n";
}
void FillArr(int Arr[3][3], int Rows, int Cols)
{
    int Num = 1;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr[i][j] = Num;
            Num += 1;
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
        std::cout << "\n";
    }
}
bool CheckIdenticalArrays(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols)
{
    bool isIdentical = true;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (ArrOne[i][j] != ArrTwo[i][j])
                return (false);
        }
    }
    return (true);
}