// vid 36

#include <iostream>
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    std::cout << a << "\n";
    std::cout << *ptr << "\n";

    a = 20;
    std::cout << a << "\n";
    std::cout << *ptr << "\n";

    *ptr = 30;
    std::cout << a << "\n";
    std::cout << *ptr << "\n";
}
