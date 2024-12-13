// vid 46
// vector Access Elements

#include <iostream>
int main()
{
    std::vector <int> vNums {1,2,3,4,5};

    // how to access it 
    //  MEthod 1
    std::cout<<vNums.at(0) << "\n";
    std::cout<<vNums.at(1) << "\n";
    std::cout<<vNums.at(2) << "\n";
    std::cout<<vNums.at(3) << "\n";
    std::cout<<vNums.at(4) << "\n";


    //  MEthod 2
    std::cout<<vNums[0] << "\n";
    std::cout<<vNums[1] << "\n";
    std::cout<<vNums[2] << "\n";
    std::cout<<vNums[3] << "\n";
    std::cout<<vNums[4] << "\n";
}
