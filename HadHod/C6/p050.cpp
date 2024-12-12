// vid 41

#include <iostream>
#include <string>

struct stEmp
{
    std::string Name;
    int Salary;
};
void PrintDetailsPtr(stEmp *ptr);
void PrintDetails(stEmp Emp);
int main()
{
    stEmp Emp1,*ptr;
    ptr = &Emp1;

    Emp1.Name = "Moutaz Sami Shaban";
    Emp1.Salary = 5000;

    std::cout << "Employee Details\n";
    std::cout << Emp1.Name;
    std::cout << Emp1.Salary;
    std::cout << "\n";

    // using Function
    PrintDetailsPtr(&Emp1);
    std::cout << "\n";
    
    std::cout << "Employee Details USing pointer\n";
    std::cout << ptr->Name;
    std::cout << ptr->Salary;
    std::cout << "\n";
    
    //using function
    PrintDetails(Emp1);
    std::cout << "\n";

}
void PrintDetailsPtr(stEmp *ptr)
{
    std::cout << "Pointer Using the function\n";
    std::cout << ptr->Name;
    std::cout << ptr->Salary;
}
void PrintDetails(stEmp Emp)
{
    std::cout << "Employee Details\n";
    std::cout << Emp.Name;
    std::cout << Emp.Salary;
}
