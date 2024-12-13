//vid 44
// Dynamic Arr

#include <iostream>
int main()
{
    int Num;
    std::cout << "How Many Students wanna have : ";
    std::cin >> Num;

    float *ptr;
    //dynamic Array
    ptr = new float[Num];

    std::cout << "Enter Grade : \n";
    for(int i = 0;i < Num;i++)
    {
        std::cout << "Student " << i + 1 << " : ";
        std::cin >> *(ptr + i);
    }
    for(int i = 0;i < Num;i++)
    {
        std::cout << "Student " << i + 1 << " Grade : " << *(ptr + i) << "\n";
    }

    // ptr memory is releases (free)
    delete[] ptr;
}
