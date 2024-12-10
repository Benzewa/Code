// vid 30 
#include <iostream>
#include <string>
#include <vector>

struct stEmp
{
    std::string FirstName;
    std::string LastName;
    int Salary;
};

void Read(std::vector<stEmp>& vEmps);
void Print(std::vector<stEmp>& vEmps);

int main()
{
    std::vector<stEmp> vEmps;
    Read(vEmps);
    Print(vEmps);
}
void Read(std::vector<stEmp>& vEmps)
{
    stEmp TempEmp;
    char ReadMore = 'Y';
    for(;ReadMore == 'Y' || ReadMore == 'y';)
    {
        std::cout<<"First Name : ";
        std::cin>>TempEmp.FirstName;
        std::cout<<"Last Name : ";
        std::cin>>TempEmp.LastName;
        std::cout<<"Salary : ";
        std::cin>>TempEmp.Salary;
        vEmps.push_back(TempEmp);

        std::cout << "Wanna Add More ? Y/N : ";
        std::cin >> ReadMore;
    }
}
void Print(std::vector<stEmp>& vEmps)
{
    int i = 1;
    for(stEmp &Emp : vEmps)
    {
        std::cout << "Member " << i << " : ";
        std::cout << Emp.FirstName << " ";
        std::cout << Emp.LastName << " ";
        std::cout << Emp.Salary << " ";
        i++;
        std::cout << "\n";
    }
}
