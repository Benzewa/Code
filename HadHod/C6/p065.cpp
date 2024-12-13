// vid 54
// Read Mode (Read FIle data)
#include <iostream>
#include <fstream>
#include <string>
void PrintFileContent(std::string FileName);
int main()
{
    PrintFileContent("MyFile.txt");
}
void PrintFileContent(std::string FileName)
{
    std::fstream MyFile;

    MyFile.open(FileName, std::ios::in); // ReadMode
    if(MyFile.is_open())
    {
        std::string Line;
        while(getline(MyFile, Line)) // getline(cin,stringName) cin and store in strinName
        {
            std::cout << Line << "\n";
        }
        MyFile.close();
    }
}
