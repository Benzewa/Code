// VId 15 Default Parameters
// Default Means (Failure)
// Default Parameters are also called Optional Parameters


// Declartion with default values
int MySum(int A,int B,int C = 0,int D = 0);
#include <iostream>

int main()
{
    std::cout << "The Sum : " << MySum(1,2,3,4);
    std::cout << "\nThe Sum : " << MySum(1,2);
    std::cout << "\nThe Sum : " << MySum(1,2,3);
}

// Definition without Defaults here
int MySum(int A,int B,int C,int D) // Default Arguments cannot be repeated
{
    return A + B + C + D;
}
