// vid 56
// Save vector to File

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void SaveVectorToFile(string FileName, vector <string> vNames);
int main()
{
    vector <string> vNames {"Moutaz","Ahmed","Amr"};
    SaveVectorToFile("MyFile.txt",vNames);
}
void SaveVectorToFile(string FileName, vector <string> vNames)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);
    if(MyFile.is_open())
    {
        for(string &Line:vNames)
        {
            if(Line != "")
                MyFile << Line << "\n";
        }
        MyFile.close();
    }
}
