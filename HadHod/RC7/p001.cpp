#include <iostream>
#include <cstdlib>

int Random(int From, int To);
void FillArr(int Arr[3][3]);
void PrintArr(int Arr[3][3]);
int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3] = {0};
    FillArr(Arr);
    PrintArr(Arr);
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[3][3])
{
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            Arr[i][j] = Random(1, 5);
        }
    }
}
void PrintArr(int Arr[3][3])
{
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            std::cout << Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
