// vid 17
// program that check if a Number Exists in a Matrix

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

int Random(int From, int to);
void FillArr(int Arr[3][3], int Rows, int Cols);
void PrintArr(int Arr[3][3], int Rows, int Cols);
bool isExisting(int Arr[3][3], int Rows, int Cols, int Number);
int ReadNum();

int main()
{
    srand((unsigned)time(NULL));
    int ArrOne[3][3] = {0};
    int Num;

    FillArr(ArrOne, 3, 3);
    PrintArr(ArrOne, 3, 3);
    Num = ReadNum();
    if (isExisting(ArrOne, 3, 3, Num))
        printf("The Number Exists\n");
    else
        printf("The Number not Existing\n");
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
bool isExisting(int Arr[3][3], int Rows, int Cols, int Number)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Number == Arr[i][j])
                return (true);
        }
    }
    return (false);
}
int ReadNum()
{
    int Num = 0;
    printf("Enter The Num : ");
    std::cin >> Num;
    return (Num);
}