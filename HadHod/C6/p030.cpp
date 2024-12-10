// vid 30
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

int main()
{
    std::vector<stEmployee> vEmployees;
    stEmployee TempEmp;
    
    TempEmp.FirstName = "Moutaz";
    TempEmp.LastName = "Sami";
    TempEmp.Salary = 7000;
    vEmployees.push_back(TempEmp);


    TempEmp.FirstName = "Mohamed";
    TempEmp.LastName = "HadHod";
    TempEmp.Salary = 10000;
    vEmployees.push_back(TempEmp);
    
    TempEmp.FirstName = "Moaz";
    TempEmp.LastName = "Yassen";
    TempEmp.Salary = 3000;
    vEmployees.push_back(TempEmp);

    std::cout << "\n";
    for(stEmployee &Employee : vEmployees)
    {
        std::cout << Employee.FirstName << "\n";
        std::cout << Employee.LastName << "\n";
        std::cout << Employee.Salary << "\n\n";
    }
}
