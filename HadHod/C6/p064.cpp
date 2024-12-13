// vid 53
// Append Mode (adds to the file without removing current data)
#include <iostream>
#include <fstream>
int main()
{
    std::fstream MyFile;
    // Logical Or || is used with booleans

    // using bitwise OR to do this bcs working with files
    MyFile.open("MyFile.txt",std::ios::out | std::ios::app);//file not Exist(ios::out)-Exists(ios::app)
    if(MyFile.is_open())
    {
        MyFile << "Added Thes lines\n";
        MyFile << "Added Thes lines\n";
        MyFile << "Added Thes lines\n";
        MyFile << "Added Thes lines\n";

        MyFile.close();
    }
}
