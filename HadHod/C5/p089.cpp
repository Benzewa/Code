// vid 40 C5
// Copy Numbers without repeatetion
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From,int To);
void FillArr(int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
void AddElement(int Num,int Arr[100],int &ArrSize);
void CopyArr(int ArrSrc[100],int ArrSrcSize,int ArrDes[100],int &ArrDesSize);
bool isFound(int Num,int Arr[100],int ArrSize);
int main()
{
    srand((unsigned)time(NULL));
    int ArrSrc[100] = {};
    int ArrDes[100] = {};
    int ArrSrcSize = 0;
    int ArrDesSize = 0;
    FillArr(ArrSrc,ArrSrcSize);
    cout << "Arr Src Elements : ";
    PrintArr(ArrSrc,ArrSrcSize);
    CopyArr(ArrSrc,ArrSrcSize,ArrDes,ArrDesSize);
    cout << "Arr Des Elements : ";
    PrintArr(ArrDes,ArrDesSize);
}
int ReadNum(string Message)
{
    int Num = 0;
    for(;Num <= 0;)
    {
        cout << Message;
        cin >> Num;
    }
    return Num;
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
void FillArr(int Arr[100],int &ArrSize)
{
    ArrSize = ReadNum("Please Enter Arr-Size : ");
    for(;ArrSize > 100;)
        ArrSize = ReadNum("Please Enter Arr-Size : ");
    for(int i = 0;i < ArrSize;i++)
    {
        printf("Please Enter Arr [%02d] : ",i + 1);
        cin >> Arr[i];
    }
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
void AddElement(int Num,int Arr[100],int &ArrSize)
{
    ArrSize++;
    Arr[ArrSize - 1] = Num;
}
void CopyArr(int ArrSrc[100],int ArrSrcSize,int ArrDes[100],int &ArrDesSize)
{
    for(int i = 0;i < ArrSrcSize;i++)
    {
        if(!(isFound(ArrSrc[i],ArrDes,ArrDesSize)))
            AddElement(ArrSrc[i],ArrDes,ArrDesSize);
    }
}
bool isFound(int Num,int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
    {
        if(Num == Arr[i])
            return true;
    }
    return false;
}
