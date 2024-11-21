// Vid 41 C5
// Check is Arr is Palindrome

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

void FillArr(int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
void ArrRev(int ArrSrc[100],int ArrDes[100],int ArrSize);
bool isPalindrome(int ArrSrc[100],int ArrDes[100],int ArrSize);

int main()
{
    int ArrSrc[100] = {};
    int ArrDes[100] = {};
    int ArrSize = 0;
    FillArr(ArrSrc,ArrSize);
    cout << "Arr Src Elements : ";
    PrintArr(ArrSrc,ArrSize);
    cout << "Arr Des Elements : ";
    ArrRev(ArrSrc,ArrDes,ArrSize);
    PrintArr(ArrDes,ArrSize);
    if(isPalindrome(ArrSrc,ArrDes,ArrSize))
        cout << "Is Palindrome";
    else
        cout << "Not Palindrome";
}
void FillArr(int Arr[100],int &ArrSize)
{
    ArrSize = 5;
    
    Arr[0] = 1;
    Arr[1] = 2;
    Arr[2] = 3;
    Arr[3] = 4;
    Arr[4] = 5;
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
void ArrRev(int ArrSrc[100],int ArrDes[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        ArrDes[i] = ArrSrc[ArrSize - i - 1];
    }
}
bool isPalindrome(int ArrSrc[100],int ArrDes[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        if(ArrSrc[i] != ArrDes[i])
            return false;
    }
    return true;
}
