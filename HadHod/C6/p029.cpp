// vid 29
// Add elements in vector

#include <iostream>
#include <vector>
void ReadNum(std::vector<int>& vNums);
void PrintNum(std::vector<int>& vNums);
int main()
{
    std::vector<int> vNums;
    ReadNum(vNums);
    PrintNum(vNums);
}
void ReadNum(std::vector<int>& vNums)
{
    char ReadMore = 'Y';
    int Number;
    while(ReadMore == 'y' || ReadMore == 'Y')
    {
        std::cout << "Please Enter A Number : ";
        std::cin >> Number;
        vNums.push_back(Number);
        std::cout << "Wanna Add More Number ? (Y/N) : ";
        std::cin >> ReadMore;
    }
}
void PrintNum(std::vector<int>& vNums)
{
    for(int Num : vNums)
        std::cout << Num << " ";
    std::cout << "\n";
}
