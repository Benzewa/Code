// vid 37
// common pointer mistakes

#include <iostream>
int main()
{
    int x,*p;

    //this is incorrect
    // p is an address but x is not
    //*p = &x;

    // this is correct
    // p is address and &x is
    p = &x;

    // this is incorrect
    // *p is value &x is address
    //*p = &x;

    // this in correct
    // p is value and x is value
    *p = x;
}
