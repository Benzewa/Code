// Multiplication Table
#include <iostream>
using namespace std;
void PrintTop();
void PrintBody();
void PrintHeader();
int main()
{
    PrintHeader();
    PrintTop();
    PrintBody();
}
void PrintTop()
{
    printf("    ");
    for(int i = 1; i <= 10; i++)
    {
        if (i == 10)
            printf("%02d", i);
        else
            printf("%02d ", i);
    }
    cout << "\n";
    cout << "---------------------------------\n";
}
void PrintBody()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%02d |", i);//Prints Side
        for(int j = 1; j <= 10; j++)
        {
            if(i == 10 && j == 10)
                printf("%02d ", i * j);
            else
                printf("%02d ", i * j);
        }
        cout << "\n";
    }
}
void PrintHeader()
{
    cout << "\n     MultiPlication From 1 to 10\n\n";
}
