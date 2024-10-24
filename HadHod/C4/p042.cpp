#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Num = 0, Sum = 0, i = 0;
    for(;Num!=-99;)
    {
        cout << "Please Enter Number " << to_string(i) << "\n";
        cin >> Num;
        if (Num == -99)
            break;
        Sum += Num;
        i++;
    }
    cout << Sum;
}
