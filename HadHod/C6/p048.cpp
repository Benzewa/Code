// vid 40
//pointer and arrays

#include <iostream>
int main()
{
    int Arr[4] = {1,2,3,4};
    int *ptr;
    ptr = Arr;
    
    std::cout << "\n";

    // Print Address using ptr
    for(int i = 0;i <= 3;i++)
    {
        std::cout << ptr + i << "\n";
    }
    std::cout << "\n";

    //Print Address using Arr
    for(int i = 0;i <= 3;i++)
    {
        std::cout << &Arr[i] << "\n";
    }
    std::cout << "\n";

    //Print Values using ptr
    for(int i = 0;i <= 3;i++)
    {
        std::cout <<*(ptr + i) << "\n";
    }
    std::cout << "\n";

    //Print Values using Arr
    for(int i = 0;i <= 3;i++)
    {
        std::cout << Arr[i] << "\n";
    }
    std::cout << "\n";

}
