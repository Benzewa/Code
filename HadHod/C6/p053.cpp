//vid 44
// Dynamic Arrays

#include <iostream>
int main()
{
    int Arr[100];
    int ArrSize = 0;
    std::cout << "How many students you have \n";
    std::cin >> ArrSize;
    for(int i = 0;i < ArrSize;i++)
    {
        std::cin >> Arr[i];
    }
    for(int i = 0;i < ArrSize;i++)
    {
        std::cout << "Student " << Arr[i] << "\n";
    }
    // The Rest of the ArrSize 100 is not used
    // HERE WE SHOULD USE DYNAMIC ARRAY
    // it will BE SHOWN NEXT PROGRAM  p054.cpp

}
