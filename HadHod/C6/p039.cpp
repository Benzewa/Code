// vid 35 
//POINTERS

#include <iostream>
int main()
{
    int a = 10;
    std::cout << "a value : " << a << "\n";
    std::cout << "a address : "<< &a << "\n";

    // Method (1) pointer declaration
    int *ptr1 = &a;
    
    // Method (2)
    int *ptr2;
    ptr2 = &a;

    std::cout << "\n";
    std::cout << "address of the pointer1 : " << &ptr1 << "\n";
    std::cout << "address ptr1 pointing to : " << ptr1 << "\n";
    std::cout << "value of location ptr pointing to : " << *ptr1 << "\n";
    std::cout << "\n";
    std::cout << "address of the pointer2 : " << &ptr2 << "\n";
    std::cout << "address ptr2 pointing to : " << ptr2 << "\n";
    std::cout << "value of location ptr pointing to : " << *ptr2 << "\n";
    std::cout << "\n";


}
