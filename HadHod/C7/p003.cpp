// vid 1
// Random Matrix 3 x 3
// cin.get() used to pause system (Debug tool)

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> // setw

int Random(int From, int To);
void FillArr(int Arr[3][3], int Row, int Col);
void PrintArr(int Arr[3][3], int Row, int Col);
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[3][3];
    FillArr(ArrSrc, 3, 3);
    PrintArr(ArrSrc, 3, 3);

    // below is used to pause program (Debugging)
    cin.get(); // waits until user input enter
}
int Random(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Arr[i][j] = Random(1, 5);
        }
    }
}
void PrintArr(int Arr[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << setw(3) << Arr[i][j] << " ";
        }
        cout << "\n";
    }
}
