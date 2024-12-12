// vid 51
// void Pointer
// void Pointer points to whatever variable type

#include <iostream>
int main()
{
    //int *ptr;
    //float F1 = 10.5;
    //ptr = &F1;

    // it fixes the above Proble trying to assign an int ptr to a float

    //void Pointer could be pointed to all data types
    void *ptr;
    
    int Num1 = 10;
    ptr = &Num1;
    // only address could be accessed
    std::cout << ptr;
    std::cout << "\n";

    // bcs the compiler doesnt know the type of ptr
    //use casting to get value
    std::cout << *(static_cast<int*>(ptr)) << "\n";

    float Num2 = 10.5;
    ptr = &Num2;

    std::cout<<"address of ptr : " << ptr << "\n";
    std::cout<<"value of ptr : " << *(static_cast<float*>(ptr));

}
