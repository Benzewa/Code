// Vid 10 C6
// Cin is an object
// if the object fail to store input

#include <iostream>
using namespace std;
int ReadNum(string Message);
int main()
{
    int Num = ReadNum("Please Enter A Number");
}
int ReadNum(string Message)
{
    int Num = 0;
    cout << Message << " : ";
    cin >> Num;
    for(;cin.fail();)
    {
        // cin object will fail is user did not enter and integer
        cin.clear(); //object clear
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); 
        // Will read first letter is wrong will ignore rest of input 

        cout << "Invalid Input " << "" << Message << " : ";
        cin >> Num;
    }
    return Num;
}
