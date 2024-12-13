// Dynamic Array
#include <iostream>
int main()
{
    int ArrSize = 0;
    std::cout << "How Many Student YOu have : ";
    std::cin >> ArrSize;

    int *ptr;
    ptr = new int[ArrSize];

    for(int i = 0;i < ArrSize;i++)
    {
        std::cout << "Enter Student " << i + 1 << " Grade : ";
        std::cin >> *(ptr + i);
    }
    std::cout << "Student Grades\n";

    for(int i = 0;i < ArrSize;i++)
    {
        std::cout << "Student " << i + 1 << " Grade " << *(ptr + i) << "\n";
    }

    delete []ptr;
}
