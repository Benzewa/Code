#include <iostream>
using namespace std;
int main()
{
    int Year = 0;
    cout << "Enter Year ";
    cin >> Year;
    /*
    if((Year % 10 == 0) && (Year % 100 == 0))
    {
        Year = Year / 100;
    }
    else
        Year = (Year / 100) + 1;
    cout << Year;
    */

    // better Solution
    if(Year % 100 == 0)
        Year = Year / 100;
    else
        Year = Year / 100 + 1;
    cout << Year;

}
