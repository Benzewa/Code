// vid 47
// vector change Elements
#include <iostream>
int main()
{
    //using const You cannot change i value

    std::vector<int> vNums{1,2,3,4,5};
    std::cout << "initial vector Elements\n";
    for(const int& i:vNums) //const make the var no changable
        std::cout << i << " ";
    std::cout << "\n";

    for(int& i:vNums)
        i = 20;
    
    std::cout << "UPdated vector Elements\n";
    for(const int& i:vNums) //const make the var no changable
        std::cout << i << " ";
    std::cout << "\n";

    vNums[0] = 30;
    vNums.at(1) = 50;
    vNums[4] = 100;

    std::cout << "Updated vector Elements\n";
    for(const int& i:vNums) //const make the var no changable
        std::cout << i << " ";
    std::cout << "\n";
}
