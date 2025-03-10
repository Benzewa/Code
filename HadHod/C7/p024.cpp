// vid 15
// program that Counts a Number in Matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
int CountNum(int Arr[3][3], int Rows, int Cols, int Number);
int ReadNumber();

int main()
{
    srand((unsigned)time(NULL));

    int ArrOne[3][3] = {0};
    int Number = 0;
    printf("Array : \n");
    FillArr(ArrOne, 3, 3);
    PrintArr(ArrOne, 3, 3);
    Number = ReadNumber();
    std::cout << CountNum(ArrOne, 3, 3, Number) << " Times\n";
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
            std::cout << std::setw(3) << Arr[i][j] << " ";
        }
        printf("\n");
    }
}
int CountNum(int Arr[3][3], int Rows, int Cols, int Number)
{
    int Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Arr[i][j] == Number)
                Counter += 1;
        }
    }
    return (Counter);
}
int ReadNumber()
{
    int Num = 0;
    std::cout << "Enter the Number : ";
    std::cin >> Num;
    return (Num);
}