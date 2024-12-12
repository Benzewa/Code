// vid 35
// Pointer

#include <iostream>
int main()
{
    int a = 10;
    int b = 50;

    int *ptr = &a;
    std::cout << "value of a : " << a << "\n";
    std::cout << "value of ptr : " << *ptr << "\n";

    *ptr = 20;
    // will change of a to 20
    std::cout << "value of ptr : " << *ptr << "\n";
    std::cout << "value of a : " << a << "\n";

    //when we re assign the var pointing to
    ptr = &b;
    std::cout << "value of b : " << b << "\n";
    std::cout << "value of ptr : " << *ptr << "\n";
    
    *ptr = 100;
    // will change of b to 100
    std::cout << "value of ptr : " << *ptr << "\n";
    std::cout << "value of b : " << b << "\n";

}
