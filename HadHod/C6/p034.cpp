// vid 31
// remove elements from vector
// using vNums.clear() to remove all at once
// using vNums.pop_back to remove one by one

//vNums.size() to see vector size
//vNums.empty() to check if vector is empty


#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> vNums;
    vNums.push_back(10);
    vNums.push_back(20);
    vNums.push_back(30);
    vNums.push_back(40);
    vNums.push_back(50);

    // size of vector
    std::cout<<"Current Size "<<vNums.size() << "\n";

    for(int &i : vNums)
    {
        std::cout << i << " ";
    }
    //to remove vector elements all at once use
        //vNums.clear()
    



    vNums.pop_back();
    vNums.pop_back();
    vNums.pop_back();
    
    // size of vector
    std::cout<<"\nCurrent Size "<<vNums.size() << "\n";

    //check if stack has more to pop

    for(;!vNums.empty();)
        vNums.pop_back();

    // This also for check of stack
    //for(;vNums.size() > 0;)
        //vNums.pop_back();

    //// if Poped more than size the program crashes
    ////vNums.pop_back();
    ////vNums.pop_back();
    ////vNums.pop_back();
    ////vNums.pop_back();
    ////vNums.pop_back();
    
    // size of vector
    std::cout<<"Current Size "<<vNums.size();
    
    std::cout << "\n";
    for(int &i : vNums)
    {
        std::cout << i << " ";
    }
    // size of vector
    std::cout<<"Current Size "<<vNums.size() << "\n";

}
