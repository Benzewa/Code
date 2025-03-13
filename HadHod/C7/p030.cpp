// vid 20
// program that checks if a Matrix is Palindrome

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

bool isPalindrome(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);
void FillRevArr(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);

int main()
{
    int ArrOne[3][3] = {{0, 4, 0}, {4, 0, 4}, {1, 9, 2}};
    int ArrTwo[3][3] = {0};
    FillRevArr(ArrOne, ArrTwo, 3, 3);
    if (isPalindrome(ArrOne, ArrTwo, 3, 3))
        printf("Is Palindrome");
    else
        printf("Is not Palindrome");
}
bool isPalindrome(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols)
{
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
void FillRevArr(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            ArrTwo[i][j] = ArrOne[i][Cols - j - 1];
        }
    }
}