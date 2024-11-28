// src/main.cpp
#include <iostream>
#include "mymath.h"  // Include the header for the library functions

int main() {
    using namespace MyMath;  // Use the MyMath namespace to call functions

    int A = 10, B = 5;
    
    // Call the functions with correct names (lowercase)
    std::cout << "Addition: " << add(A, B) << std::endl;
    std::cout << "Subtraction: " << subtract(A, B) << std::endl;
    std::cout << "Multiplication: " << multiply(A, B) << std::endl;

    return 0;
}

