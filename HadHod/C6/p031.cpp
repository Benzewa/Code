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
    Print(vEmps);
}
void Read(std::vector<stEmployee>& vEmps)
{
    stEmployee TempEmp;
    TempEmp.FirstName = "Moutaz";
    TempEmp.LastName = "Sami";
    TempEmp.Salary = 8000;
    vEmps.push_back(TempEmp);

    TempEmp.FirstName = "Ahmed";
    TempEmp.LastName = "Sami";
    TempEmp.Salary = 6000;
    vEmps.push_back(TempEmp);
    
    TempEmp.FirstName = "Amro";
    TempEmp.LastName = "Sami";
    TempEmp.Salary = 5000;
    vEmps.push_back(TempEmp);
}
void Print(std::vector<stEmployee>& vEmps)
{
    for(stEmployee &Emp : vEmps)
    {
        std::cout << Emp.FirstName << " ";
        std::cout << Emp.LastName << " ";
        std::cout << Emp.Salary << " ";
        std::cout << "\n";
    }
}
