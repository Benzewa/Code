// vid 52 
// write mode deletes current info and replaces with new
// File Handling (Open and write on file in cpp)
#include <iostream>
#include <fstream> // files handling
int main()
{
    // declare an fstream Object for file output
    std::fstream MyFile;

    // open file in the output mode (ios::out)
    // the file is edited and all old stuff is deleted
    MyFile.open("MyFile.txt", std::ios::out);

    // Check if file in Output mode
    if(MyFile.is_open())
    {
        // write some data to the file
        MyFile << "Moutaz Sami\n";
        MyFile << "Hello This is some text added to the file\n";

        // confirm process
        std::cout << "FIle successfully opened and written-on\n";
        
        // close file after edits
        MyFile.close();
    }
    else
    {
        std::cout << "File was not accessed correctly\n";
    }

}
