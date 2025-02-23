// vid 15
// Program that counts a number in a matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int CountNumInMatrix(int Number, int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);

int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3] = {{1, 2, 2}, {1, 2, 3}, {1, 0, 2}};
    int Number = 0;
    PrintArr(Arr, 3, 3);
    std::cout << "Enter Number You Wanna Look for : ";
    std::cin >> Number;
    std::cout << CountNumInMatrix(Number, Arr, 3, 3);
    std::cout << "\n";
}
int CountNumInMatrix(int Number, int Arr[3][3], int Rows, int Cols)
{
    int Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Number == Arr[i][j])
                Counter++;
        }
    }
    return (Counter);
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