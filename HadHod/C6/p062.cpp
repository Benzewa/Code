// vid 51
// CCTYPE functions (Character Type Functions)
#include <iostream>
#include <cctype>
int main()
{
    char x;
    char w;

    x = toupper('a'); //converts from 97 to 65
    w = tolower('A'); //converts from 65 to 97

    std::cout << x << "\n";
    std::cout << w << "\n";


    // return zero if false if true return non-zero value
    std::cout << "(isupper) method\n" << isupper(x) << "\n";
    std::cout << isupper(w) << "\n\n";
    
    // return zero if false if true return non-zero value
    std::cout << "(islower) method\n" << islower(x) << "\n";
    std::cout << islower(w) << "\n";

    // isdigit return 0 if false returns non-zero if true
    std::cout << isdigit('9') << "\n";
    std::cout << isdigit('A') << "\n";

    // ispunct return 0 if false returns non-zero if true
    // punc : !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    std::cout << ispunct('A') << "\n";
    std::cout << ispunct('!') << "\n";

}
