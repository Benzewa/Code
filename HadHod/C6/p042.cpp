// vid 36
// derefrencing Pointer

#include <iostream>
int main()
{
    int a = 10;
    int *ptr;
    // refrencing
    ptr = &a;

    std::cout << "ptr pointing address : ";
    std::cout << ptr << "\n";
    std::cout << "a value : ";
    std::cout << a << "\n";
    // derefrencing
    std::cout << "value ptr pointing to : ";
    std::cout << *ptr << "\n";
}
