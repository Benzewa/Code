// vid 32
// vector functions

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vNums;
    
    // add items to vector
    vNums.push_back(10);
    vNums.push_back(20);
    vNums.push_back(30);
    vNums.push_back(40);
    vNums.push_back(50);

    std::cout << "Intial vector : ";

    for(int &i : vNums)
        std::cout << i << " ";
    std::cout << "\n";

    //show the first Element
    std::cout << "First Element : " << vNums.front() << "\n";
    
    //show the Last Element
    std::cout << "Last Element : " << vNums.back() << "\n";

    //show the current size of vector
    std::cout << "Size of Vector : "<< vNums.size() << "\n";
    
    //show the current Capacity of vector
    //shows the memory allocated for the vector
    //it might me be larger than the size
    //it also accomadates more as the size increases
    std::cout<<"Vector Capacity : "<< vNums.capacity() << "\n";

    //show if vector vector is empty or not  //prints 0 if not empty
    std::cout << "IS empty ? : " << vNums.empty() << "\n";

    //Removes item one my one from the last input to first
    vNums.pop_back();

    //removes all contents of vector
    vNums.clear();
    
    std::cout << "vector after clear : ";

    for(int &i : vNums)
        std::cout << i << " ";
    std::cout << "\n";
    
    //show if vector vector is empty or not  // prints 1 if empty
    std::cout << "IS empty ? : " << vNums.empty() << "\n";


}
