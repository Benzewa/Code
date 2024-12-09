// vid 28
// Vectors (Declaration && intialization)
// Arrays (Fixed Size)
// Vector is Dynamic Array
// Vector are used with Ranged Loops (for each)

#include <iostream>
#include <vector>
int main()
{
    // std::vector<DataType> vectorName
    std::vector<int> vNums = {1,2,3,4,5};
    std::cout << "Vector Contents : ";

    // this will be so slow bcs its copies each vector element in a new location
    for(int Num : vNums)
    {
        std::cout << Num << " ";
    }

    std::cout << "\nVector Contents : ";
    // Fix for the prev problem
    for(int &Num : vNums)
    {
        std::cout << Num << " ";
    }
}
