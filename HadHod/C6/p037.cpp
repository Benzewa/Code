// vid 33 
// call by REFerence

#include <iostream>
void Function(int& x);
int main()
{
    int x = 0; // 0
    std::cout <<"x value before function : "<< x << "\n";
    std::cout <<"x address : "<< &x << "\n";
    Function(x);
    std::cout <<"x value after function : "<< x << "\n"; // 1
    std::cout <<"x address : "<< &x; // this reveals the address
}
void Function(int& x) //changes will show in main bcs call by REF
{
    //alias and main var have same addresses
    std::cout << "address of the alias : " << &x << "\n";
    x++;
}
