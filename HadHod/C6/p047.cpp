//vid 40
//pointers and arrays

#include <iostream>
int main()
{
    int Arr[4] = {1,2,3,4};
    int *ptr;
    
    ptr = Arr;
    //ptr is pointing on first element of Array

    //ptr == &Arr[0]
    //ptr+1 == &Arr[1]
    //ptr+2 == &Arr[2]
    //ptr+3 == &Arr[3]

    std::cout <<"\n";
    std::cout << "(Address using ptr)\n";
    std::cout << ptr << "\n";
    std::cout << ptr + 1 << "\n";
    std::cout << ptr + 2 << "\n";
    std::cout << ptr + 3 << "\n";
    std::cout <<"\n";

    std::cout << "(Address using arr)\n";
    std::cout << &Arr[0] << "\n";
    std::cout << &Arr[1] << "\n";
    std::cout << &Arr[2] << "\n";
    std::cout << &Arr[3] << "\n";
    std::cout <<"\n";
    
    std::cout <<"\n";
    std::cout << "(values using ptr)\n";
    std::cout << *(ptr) << "\n";
    std::cout << *(ptr + 1) << "\n";
    std::cout << *(ptr + 2) << "\n";
    std::cout << *(ptr + 3) << "\n";
    std::cout <<"\n";

    std::cout << "(values using arr)\n";
    std::cout << Arr[0] << "\n";
    std::cout << Arr[1] << "\n";
    std::cout << Arr[2] << "\n";
    std::cout << Arr[3] << "\n";

}
