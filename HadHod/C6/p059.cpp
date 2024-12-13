//vid 48
// Vector iterators (move through vector elements USING POINTERS)
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vNums{1,2,3,4,5};

    //declare iterator
    std::vector<int>::iterator iter;


    //use iterator with for loop
    for(iter = vNums.begin();iter != vNums.end();iter++)
    {
        std::cout << *iter << " ";
    }
}
