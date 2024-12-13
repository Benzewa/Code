// vid 50
// String (OBJECT) Functions
#include <iostream>
#include <string>
// OBject Oriented Programming 
// string is an object which cointains Methods

int main()
{
    std::string S1 = "My Name is Moutaz Sami Shaban, I Love Programming.";
    
    //Method 1 S1.length (Prints the length of the string)
    std::cout << S1.length() << "\n";
    
    //Method 2 S1.at(n)  (Prints the char at position)
    std::cout << S1[3] << "\n";
    std::cout << S1.at(3) << "\n";

    //Method 3 S1.append() (adds at the end of a string)
    std::cout << S1.append(" Hello World") << "\n";

    //Method 4 S1.insert(7, " MoSami ") (insert at index)
    std::cout << S1.insert(7, " Mo Sami ") << "\n";
    
    //Method 5 S1.substr(16,8) (Prints next 8 digits after index 16)
    std::cout << S1.substr(17,9) << "\n";
    
    //Method 6 S1.push_back('s') (Adds one Character 's' at the end of string)
    S1.push_back('X');
    std::cout << S1 << "\n";

    //Method 7 S1.pop_back (Remove the Last char from string)
    S1.pop_back();
    std::cout << S1 << "\n";
    
    //Method 8 S1.find("Program") (Finds the substr in a string (Case Sensitive) returns location)
    std::cout << S1.find("Program") << "\n";
    std::cout << S1.find("Ahmed") << "\n";

    // S1.npos == Large Number
    
    // to check also if a substr is found
    if(S1.find("Ahmed") == S1.npos) //no position So if the Large number is returned handled (NotFound)
    {
        std::cout << "Sub string Not Found\n";
    }

    // Final (S1.clear() deletes all Character of a string)
    S1.clear();
    std::cout << S1 << "\n";

    
}
