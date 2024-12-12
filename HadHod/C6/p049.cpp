// vid 41
// Pointers with structure

#include <iostream>
#include <string>

struct stEmp
{
    std::string Name;
    float Salary;
};

int main()
{
    stEmp Emp1,*ptr;

    Emp1.Name = "Moutaz Sami Shaban\n";
    Emp1.Salary = 5000;
    std::cout << "\n";
    std::cout << "Emp Details : \n";
    std::cout << Emp1.Name;
    std::cout << Emp1.Salary << "\n";
    std::cout << "\n";
    ptr = &Emp1;
    std::cout <<"Using Pointer : \n";
    std::cout << ptr->Name;
    std::cout << ptr->Salary << "\n";

}
