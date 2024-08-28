#include <iostream>
#include <string>
using namespace std;

//structure group of related varinbles

struct stOwner
{
    string FullName;
    string PhoneNumber;
    string Gender;
};

struct stCar
{
    stOwner Owner;
    string Brand;
    string Model;
    int Year;
};

int main()
{
    stCar MyCar1;
    MyCar1.Brand = "BMW";
    MyCar1.Model = "M8";
    MyCar1.Year = 2024;
    MyCar1.Owner.FullName = "Moutaz";
    MyCar1.Owner.PhoneNumber = "0505578740";
    MyCar1.Owner.Gender = "Male";


    cout<<MyCar1.Brand<<" "<<MyCar1.Model<<" "<<MyCar1.Year<<"\n";


    

    return (0);
}