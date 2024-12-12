// vid 38
// pointer vs Refrences(ref is just a nickname) (does not create a new memory slot)
#include <iostream>
int main()
{
    int a = 10;
    int &x = a; //this is a reference
    std::cout << &a << "\n";
    std::cout << &x << "\n";
    //std::cout << *x << "\n"; //this will not work it needs to be a pointer not a reference

    std::cout << a << "\n";
    std::cout << x << "\n";
    
    int *ptr; //this is a pointer
    ptr = &a;
    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";









    // pointer has its location in memory
    // pointer could be changed and point on another variable

    // refrence does not have its location in memory its just a new name for the var
    // refrence could not be changed and could be attached to another variable
}
