// vid 7
// Transpose a Matrix

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int Random(int From, int To);
void FillSrcArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
void FillDesArr(int ArrSrc[3][3], int Rows, int Cols, int ArrDes[3][3]);

int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3];
    int ArrDes[3][3];
    std::cout << "\n";
    std::cout << "Original Matrix :\n";
    FillSrcArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);
    std::cout << "\n";
    std::cout << "Transposed Matrix :\n";
    FillDesArr(ArrSrc, 3, 3, ArrDes);
    PrintArr(ArrDes, 3, 3);
}
int Random(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}
void FillSrcArr(int Arr[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Arr[i][j] = Random(10, 50);
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
void FillDesArr(int ArrSrc[3][3], int Rows, int Cols, int ArrDes[3][3])
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrDes[i][j] = ArrSrc[j][i];
        }
    }
}