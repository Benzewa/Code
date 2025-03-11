// vid 20
// program that checks if a Matrix is Palindrome

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

void FillRevArr(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);
bool isPalindrome(int ArrOne[3][3], int ArrTwo[3][3], int Rows, int Cols);

int main()
{
    int ArrOne[3][3] = {{1, 0, 1}, {0, 5, 0}, {7, 2, 7}};
    int ArrTwo[3][3] = {0};
    FillRevArr(ArrOne, ArrTwo, 3, 3);
    if (isPalindrome(ArrOne, ArrTwo, 3, 3))
        std::cout << "Palindrome\n";
    else
        std::cout << "Non Palindrome\n";
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