// vid 59
// Local and UTC DATE / TIME
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t T = time(0); // get time now

    // function that converts time to string 
    char *dt = ctime(&T);
    cout << "Local Time Now in Local : " << dt << "\n";

    // function to convert to gmt
    tm* gmt = gmtime(&T);

    // function asctime converts from stucture to string
    dt = asctime(gmt);
    cout << "Current Time in GMT     : " << dt << "\n";

}
