// vid 27
// Two Dimentional Array

#include <iostream>
int main()
{
    int Arr[3][2] = 
    {
        {1,2},
        {4,5},
        {7,8}
    };

    for(int i = 0;i <= 2;i++)
    {
        for(int j = 0;j <= 1;j++)
        {
            std::cout << Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
