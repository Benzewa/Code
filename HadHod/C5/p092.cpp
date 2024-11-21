// Vid 41 C5
// Arr is Palindrome
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
void FillArr(int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
bool isPalindrome(int ArrSrc[100],int ArrSize);
int main()
{
    int ArrSrc[100] = {};
    int ArrSize = 0;
    FillArr(ArrSrc,ArrSize);
    cout << "Arr Src Elements : ";
    PrintArr(ArrSrc,ArrSize);
    if(isPalindrome(ArrSrc,ArrSize))
        cout << "Arr is Palindrome";
    else
        cout << "Arr is Not Palindrome";
}
void FillArr(int Arr[100],int &ArrSize)
{
    ArrSize = 5;
    Arr[0] = 1;
    Arr[1] = 2;
    Arr[2] = 3;
    Arr[3] = 2;
    Arr[4] = 1;
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
bool isPalindrome(int ArrSrc[100],int ArrSize)
{
    for(int i = 0;i < ArrSize / 2;i++)
    {
        if(ArrSrc[i] != ArrSrc[ArrSize - i - 1])
            return false;
    }
    return true;
}
