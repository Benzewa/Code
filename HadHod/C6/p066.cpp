#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // Write And Append Modes File

    fstream MyFile;
    MyFile.open("MyFile.txt",ios::out | ios::app); // write mode OR app mode
    if(MyFile.is_open())
    {
        MyFile << "Moutaz\n";
        MyFile << "Sami\n";
        MyFile << "Shaban\n";
        MyFile << "Hassan\n";

        MyFile.close();
    }
}
