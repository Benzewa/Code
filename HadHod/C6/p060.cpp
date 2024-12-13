// vid 49
// TRY Catch
// (Handles Crashes)
// (Exception Handling)

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vNums{1,2,3,4,5};
    //std::cout << vNums.at(5); causes exception HANDLED Below
    try
    {
        std::cout << vNums.at(5);
    }
    catch(...)
    {
        std::cout << "Out OF Bounds\n";
    }
}
