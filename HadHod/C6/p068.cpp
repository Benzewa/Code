//vid 55
// Load Data From file to Vector

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void LoadFile(string FileName, vector<string>& vFileContent);
int main()
{
    vector<string> vFileContent;
    LoadFile("MyFile.txt",vFileContent);
    for(string &Line : vFileContent)
    {
        cout << Line << "\n";
    }
}
void LoadFile(string FileName, vector<string>& vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);
    if(MyFile.is_open())
    {
        string Line;
        while(getline(MyFile, Line))
        {
            // instead of cout << Line (push to vector)
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}
