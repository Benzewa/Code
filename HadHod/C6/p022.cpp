// String Char Format (printf)
// printf does not work with string (alternative can work with (char Array))

#include <iostream>
#include <cstdio>

int main()
{
    // string in Arr of Char Format
    char Name[] = "Moutaz Sami Shaban Hassan\0";
    std::cout << Name << "\n";
    for (int i = 0;Name[i] != '\0';i++)
    {
        std::cout << Name[i] << " ";
    }
    std::cout << "\n";

    //printf String
    printf("%s",Name);
    std::cout << "\n";

    //printf
    for (int i = 0;Name[i] != '\0';i++)
    {
        printf("%c ",Name[i]);
    }
    std::cout << "\n";

    //printf Char
    char C = 'S';
    printf("%1c\n",C);
    printf("%2c\n",C);
    printf("%3c\n",C);
    printf("%4c\n",C);
    printf("%5c\n",C);
}
