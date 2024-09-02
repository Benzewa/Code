//structures
#include <iostream>
#include <string>
using namespace std;

// structure group of related varinbles

struct stAddress
{
    string Street;
    string PoBox;
};
struct stOwner
{
    string FullName;
    string PhoneNumber;
    string Gender;
    stAddress Address;
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
    MyCar1.Owner.FullName = "Moutaz Sami Shaban";
    MyCar1.Owner.PhoneNumber = "0505578740";
    MyCar1.Owner.Gender = "Male";
    MyCar1.Owner.Address.Street = "Salam Street";
    MyCar1.Owner.Address.PoBox = "54448";

    cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << " " << MyCar1.Owner.FullName << " " << MyCar1.Owner.PhoneNumber << " " << MyCar1.Owner.Gender << "\n";
    cout << MyCar1.Owner.Address.Street << " " << MyCar1.Owner.Address.PoBox << "\n";

    return (0);
}