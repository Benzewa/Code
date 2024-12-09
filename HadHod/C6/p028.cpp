// vid 29
// vector practise

#include <iostream>
#include <vector>
#include <string>

int ReadNum(std::string Msg);
void ReadNumbers(std::vector<int>& vNums);
void PrintNumbers(std::vector<int> vNums);
int main()
{
    std::vector<int> vNums;
    ReadNumbers(vNums);
    PrintNumbers(vNums);
}
int ReadNum(std::string Msg)
{
    int Num = 0;
    std::cout << Msg;
    std::cin >> Num;
    return Num;
}
void ReadNumbers(std::vector<int>& vNums)
{
    char Y = 'y';
    for(;Y == 'y' || Y == 'Y';)
    {
        vNums.push_back(ReadNum("Please Enter A Number : "));
        std::cout << "Wanna Add more Numbers ? (Y/N) : ";
        std::cin >> Y;
    }
}
void PrintNumbers(std::vector<int> vNums)
{
    for(int &i : vNums)
        std::cout << i << " ";
}
