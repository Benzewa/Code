// Dynamic var
#include <iostream>
int main()
{
    int *ptrX;
    double *ptrY;

    ptrX = new int;
    ptrY = new double;
    
    std::cout << "Pointer Location : " << ptrX << "\n";
    std::cout << "Pointer Value : " << *ptrX << "\n";
    
    std::cout << "Pointer Location : " << ptrY << "\n";
    std::cout << "Pointer Value : " << *ptrY << "\n";

    *ptrX = 50;
    *ptrY = 99.9;

    std::cout << "Pointer Location : " << ptrX << "\n";
    std::cout << "Pointer Value : " << *ptrX << "\n";
    
    std::cout << "Pointer Location : " << ptrY << "\n";
    std::cout << "Pointer Value : " << *ptrY << "\n";

    delete ptrX;
    delete ptrY;
   
    std::cout << "After Free\n";
    std::cout << "Pointer Location : " << ptrX << "\n";
    std::cout << "Pointer Value : " << *ptrX << "\n";
    
    std::cout << "Pointer Location : " << ptrY << "\n";
    std::cout << "Pointer Value : " << *ptrY << "\n";
}
