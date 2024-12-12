//vid 39
// calling by reference using pointers
//using pointers swap address should be given as args

#include <iostream>
void NormSwap(int& Num1,int& Num2);
void PointerSwap(int* Num1,int* Num2);
int main()
{
    int Num1 = 10;
    int Num2 = 20;

    std::cout << "\n";
    std::cout << "Using Normal Swap\n";
    std::cout << Num1 << "\n";
    std::cout << Num2 << "\n";
    NormSwap(Num1,Num2);
    std::cout << Num1 << "\n";
    std::cout << Num2 << "\n";
    
    std::cout << "\n";
    std::cout << "Using Pointer Swap\n";
    std::cout << Num1 << "\n";
    std::cout << Num2 << "\n";
    PointerSwap(&Num1,&Num2);
    std::cout << Num1 << "\n";
    std::cout << Num2 << "\n";

}
void NormSwap(int& Num1,int& Num2)
{
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void PointerSwap(int* Num1,int* Num2)
{
    //using pointers swap address should be given as args
    int Temp;
    Temp = *Num1;
    *Num1 = *Num2;
    *Num2 = Temp;
}
