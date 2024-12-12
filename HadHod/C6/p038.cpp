// vid 34
// creating refrences
// (Refrences are just other name of var (Nickname))
#include <iostream>
int main ()
{
    // x is a refrence points on same address of a
    int a = 10;

    // how to declare a refrence
    int &x = a;

    std::cout<<"add  of  a : "<<&a<<"\n"; // address
    std::cout<<"add  of  x : "<<&x<<"\n"; // address

    //if changed value of x (a will also change)
    //if changed value of a (x will also change)

    x = 20;
    std::cout<<"value of a : "<<a<<"\n";
    std::cout<<"value of x : "<<x<<"\n";
    a = 50;
    std::cout<<"value of a : "<<a<<"\n";
    std::cout<<"value of x : "<<x<<"\n";

    std::cout <<"\n\n\n";

    int Num1 = 20;
    int &Num2 = Num1;

    std::cout << "Var Num1 value : " << Num1 << "\n";
    std::cout << "Ref Num2 value : " << Num2 << "\n";
    std::cout << "Var Address : " << &Num1 << "\n";
    std::cout << "Ref Address : " << &Num2 << "\n";
}
