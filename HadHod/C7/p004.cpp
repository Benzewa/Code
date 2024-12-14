// vid 2
// Fill 3 x 3 Random matrix
// print out Sum of Each row

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
// cin.get();
using namespace std;

int Random(int From,int To);
void FillArr(int Arr[3][3],int Row,int Col);
void PrintArr(int Arr[3][3],int Row,int Col);
int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3];
    FillArr(Arr,3,3);
    PrintArr(Arr,3,3);
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[3][3],int Row,int Col)
{
    for(int i = 0;i < Row ;i++)
    {
        for(int j = 0;j < Col;j++)
        {
            Arr[i][j] = Random(1,10);
        }
    }
}
void PrintArr(int Arr[3][3],int Row,int Col)
{
    int Row0 = 0,Row1 = 0,Row2 = 0;
    for(int i = 0;i < Row ;i++)
    {
        for(int j = 0;j < Col;j++)
        {
            cout << setw(3) << Arr[i][j] << " ";
            if(i == 0)
                Row0 = Row0 + Arr[i][j];
            if(i == 1)
                Row1 = Row1 + Arr[i][j];
            if(i == 2)
                Row2 = Row2 + Arr[i][j];
        }
        cout << "\n";
    }
    cout << setw(4) << "Sum of Row 1 : " << Row0 << "\n";
    cin.get();
    cout << setw(4) << "Sum of Row 2 : " << Row1 << "\n";
    cin.get();
    cout << setw(4) << "Sum of Row 3 : " << Row2 << "\n";
}
