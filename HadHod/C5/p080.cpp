// Problem 36 C5
// Semi-Dynamic Arr To read Numbers to array of intial max size of 100
#include <iostream>
#include <string>
using namespace std;
int ReadNum(string Message);
int main()
{
    int Arr[100] = {};
    int ArrSize = 1;
    int Num = 0;
    cout << "Please Enter Number\n";
    cin >> Num;
    Arr[0] = Num;
    int Check = 0;
    for(int i = 0;i < ArrSize;i++)
    {
        cout << "Want To add another Number ? [0] No , [1] Yes \n";
        cin >> Check;
        if(Check)
        {
            cin >> Num;
            Arr[i + 1] = Num;
            ArrSize++;
        }
        else
        {
            break;
        }
    }
    for(int i = 0;i < ArrSize;i++)
    {
        cout << Arr[i] << " ";
    }
}
int ReadNum(string Message)
{
    int Num = 0;
    while(Num <= 0)
    {
        cout << Message;
        cin >> Num;
    }
    return Num;
}
