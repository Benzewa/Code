#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void PrintFileContent(string FileName);
int main()
{
    PrintFileContent("MyFile.txt");
}
void PrintFileContent(string FileName)
{
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::in); // Read Mode
    if(MyFile.is_open())
    {
        string Line;
        while(getline(MyFile,Line))
        {
            cout << Line << "\n";
        }
        MyFile.close();
    }
}
