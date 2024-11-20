// vid 40 C5
// Copy Distinct Numbers To Arr
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
int ReadNum(string Message);
int Random(int From,int To);
void FillArr(int Arr[100],int &ArrSize);
void PrintArr(int Arr[100],int ArrSize);
void Add(int Num,int Arr[100],int &ArrSize);
bool isFound(int Num,int Arr[100],int ArrSize);
void Copy(int ArrSrc[100],int ArrDes[100],int ArrSrcSize,int &ArrDesSize);
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
    Copy(ArrSrc,ArrDes,ArrSrcSize,ArrDesSize);
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
    ArrSize = ReadNum("PLease Enter ArrSize : ");
    for(;ArrSize > 100;)
        ArrSize = ReadNum("PLease Enter ArrSize : ");
    for(int i = 0;i < ArrSize;i++)
    {
        printf("Enter Element %02d : ", i + 1);
        cin >> Arr[i];
    }
}
void PrintArr(int Arr[100],int ArrSize)
{
    for(int i = 0;i < ArrSize;i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
void Add(int Num,int Arr[100],int &ArrSize)
{
    ArrSize++;
    Arr[ArrSize - 1] = Num;
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
void Copy(int ArrSrc[100],int ArrDes[100],int ArrSrcSize,int &ArrDesSize)
{
    for(int i = 0;i < ArrSrcSize;i++)
    {
        if(!(isFound(ArrSrc[i],ArrDes,ArrDesSize)))
            Add(ArrSrc[i],ArrDes,ArrDesSize);
    }
}
