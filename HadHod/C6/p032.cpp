// vector of structure

#include <iostream>
#include <vector>
#include <string>

struct stEmployee
{
    std::string FirstName;
    std::string LastName;
    int Salary;
};

void Read(std::vector<stEmployee>& vEmps);
void Print(std::vector<stEmployee>& vEmps);

int main()
{
    std::vector<stEmployee> vEmps;
    Read(vEmps);
    std::cout << "\n";
    Print(vEmps);
}
void Read(std::vector<stEmployee>& vEmps)
{
    stEmployee TempEmp;
    char ReadMore = 'Y';
    for(;ReadMore == 'Y' || ReadMore == 'y';)
    {
        std::cin >> TempEmp.FirstName;
        std::cin >> TempEmp.LastName;
        std::cin >> TempEmp.Salary;
        vEmps.push_back(TempEmp);

        std::cout << "Wanna Add More ? Y/N : ";
        std::cin >> ReadMore;
    }
}
void Print(std::vector<stEmployee>& vEmps)
{
    int i = 1;
    for(stEmployee &Emp : vEmps)
    {
        std::cout << "Member " << i << "\n";
        std::cout << Emp.FirstName << " ";
        std::cout << Emp.LastName << " ";
        std::cout << Emp.Salary << " ";
        std::cout << "\n";
        i++;
    }
}
