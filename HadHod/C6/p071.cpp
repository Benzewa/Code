// vid 58
// Update and Delete Record From File
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void PrintFile(string FileName);
void DeleteRecordFromFile(string FileName, string Record);
void LoadDataFromFileToVector(string FileName, vector<string> &vNames);
void SaveVectorToFile(string FileName, vector<string> vNames);
void UpdateRecordInFile(string FileName, string Record, string UpdateTo);
int main()
{
    cout << "File Before Delete\n";
    PrintFile("MyFile.txt");
    DeleteRecordFromFile("MyFile.txt", "Saleh");
    cout << "File After Delete\n";
    PrintFile("MyFile.txt");
    cout << "File After Update\n";
    UpdateRecordInFile("MyFile.txt", "Mohamed" , "MoSaleh");
    PrintFile("MyFile.txt");
}
void PrintFile(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);
    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            cout << Line << "\n";
        }
        MyFile.close();
    }
}
void DeleteRecordFromFile(string FileName, string Record)
{
    vector<string> vNames;

    // Load Data From File to vector
    LoadDataFromFileToVector(FileName, vNames);

    // go through vector and delete all "Ali" Found
    for (string &Line : vNames)
    {
        if (Line == Record) // Line == "Ali"
            Line = "";      // to Replace just Line = "Lorem"
    }

    // Save Vector to File
    SaveVectorToFile(FileName, vNames);
}
void UpdateRecordInFile(string FileName, string Record, string UpdateTo)
{
    vector<string> vNames;

    // Load Data From File to vector
    LoadDataFromFileToVector(FileName, vNames);

    // go through vector and delete all "Ali" Found
    for (string &Line : vNames)
    {
        if (Line == Record) // Line == "Ali"
            Line = UpdateTo;      // to Replace just Line = "Lorem"
    }

    // Save Vector to File
    SaveVectorToFile(FileName, vNames);
}
void LoadDataFromFileToVector(string FileName, vector<string> &vNames)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);
    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            vNames.push_back(Line);
        }
        MyFile.close();
    }
}
void SaveVectorToFile(string FileName, vector<string> vNames)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);
    if (MyFile.is_open())
    {
        for (string &Line : vNames)
        {
            if (Line != "")
                MyFile << Line << "\n";
        }
        MyFile.close();
    }
}
