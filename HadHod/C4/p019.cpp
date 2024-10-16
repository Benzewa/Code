#include<iostream>
using namespace std;
//swap 2 numbers

void ReadNum(int &A, int &B);
void Swap(int &A, int &B);
void PrintNum(int A, int B);

int main(void)
{
    int Num1 = 0, Num2 = 0;
    //before swap
    ReadNum(Num1, Num2);
    PrintNum(Num1, Num2);
    //after swap
    Swap(Num1, Num2);
    PrintNum(Num1, Num2);
    
    return 0;
}

void ReadNum(int &A, int &B)
{
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
}
void Swap(int &A, int &B)
{
    int Temp = 0;
    Temp = A;
    A = B;
    B = Temp;
}
void PrintNum(int A, int B)
{
    cout << "A : " << A << "\n" << "B : " << B << "\n";
}
