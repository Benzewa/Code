// vid 43
// Memory management (New and Delete)
// An application for pointers is dynamic memory allocation

// Advantages of DMA (Dynamic MeM Allocation)
//  save storage
//  Faster execution time

#include <iostream>
int main()
{
    //declare int pointer
    int* ptrX;

    //decalare float pointer
    float* ptrY;

    //(Allocation Process) dynamically allocate memory
    ptrX = new int; //runtime allocated
    ptrY = new float; //runtime allocated

    *ptrX = 50;
    *ptrY = 10.5;

    std::cout << ptrX << " " << *ptrX << "\n";
    std::cout << ptrY << " " << *ptrY << "\n";

    //(Deallocation Process) delete dynamic allocated mem var
    delete ptrX;
    delete ptrY;
    
    std::cout << ptrX << " " << *ptrX << "\n";
    std::cout << ptrY << " " << *ptrY << "\n";

    
    ptrX = new int;
    ptrY = new float;

    *ptrX = 100;
    *ptrY = 23.5;

    std::cout << ptrX << " " << *ptrX << "\n";
    std::cout << ptrY << " " << *ptrY << "\n";

    delete ptrX;
    delete ptrY;
    
    std::cout << ptrX << " " << *ptrX << "\n";
    std::cout << ptrY << " " << *ptrY << "\n";

}
