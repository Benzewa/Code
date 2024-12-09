// vid 29
// Add Elements To Vector
// vector is (Stack)

#include <iostream>
#include <vector>
int main()
{
    std::vector<int> vNums;
    vNums.push_back(10);
    vNums.push_back(20);
    vNums.push_back(30);
    vNums.push_back(40);
    vNums.push_back(50);

    std::cout << "Vector After push_back() : ";
    for(int &i : vNums)
    {
        std::cout << i << " ";
    }
    
    vNums.pop_back();
    vNums.pop_back();
    vNums.pop_back();
    vNums.pop_back();
    //vNums.pop_back();
    //10 just will remain bcs its the deepest in stack
    
    std::cout << "\nVector After pop_back() : ";
    for(int &i : vNums)
    {
        std::cout << i << " ";
    }

}
