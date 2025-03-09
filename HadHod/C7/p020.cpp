// vid 11
// program that compares two matrices and check if they are Equal in the Sum of Elements

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
bool CheckEqualArrays(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);
int MatrixSum(int ArrOne[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int ArrOne[3][3] = {0};
    int ArrTwo[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    bool AreEqual = false;

    FillArr(ArrOne, 3, 3);
    printf("Array One : \n");
    PrintArr(ArrOne, 3, 3);

    // FillArr(ArrTwo, 3, 3);
    printf("Array Two : \n");
    PrintArr(ArrTwo, 3, 3);

    AreEqual = CheckEqualArrays(ArrOne, ArrTwo, 3, 3);
    if (AreEqual)
        std::cout << "The Arrays Are Equal\n";
    else
        std::cout << "The Array Are not Equal\n";
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
bool CheckEqualArrays(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols)
{
    int SumOne = MatrixSum(ArrOne, 3, 3);
    int SumTwo = MatrixSum(ArrTwo, 3, 3);
    if (SumOne != SumTwo)
        return (false);
    return (true); // else return true
}
int MatrixSum(int ArrOne[3][3], int Rows, int Cols)
{
    int Sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Sum += ArrOne[i][j];
        }
    }
    return (Sum);
}