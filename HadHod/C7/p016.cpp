// vid 7
// Transpose of a Matrix but in a different Matrix

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void FillTransposedArray(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);

int main()
{
    int ArrOne[3][3] = {0};
    int ArrTwo[3][3] = {0};
    FillArr(ArrOne, 3, 3);
    PrintArr(ArrOne, 3, 3);
    std::cout << "-------------\n";
    FillTransposedArray(ArrOne, ArrTwo, 3, 3);
    PrintArr(ArrTwo, 3, 3);
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
            std::cout <<"\033[31m"<< std::setw(3) << Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
void FillTransposedArray(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrTwo[i][j] = ArrOne[j][i];
        }
    }
}

