// vid 35
// pointer to pointer
#include <iostream>
int main()
{
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1; 
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;

    std::cout << *******ptr7;
}
