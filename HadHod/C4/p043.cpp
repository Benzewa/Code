//prime Numbers
#include <iostream>
using namespace std;
int main()
{
    int Num = 0;
    for (int j = 0 ; ; j++)
    {
        int Counter = 0;
        cout << "Enter A Num\n";
        cin >> Num;
        if (Num == -99)
            break;
        for (int i = Num ; i >= 2 ; i--)
        {
            if (Num % i == 0)
                Counter++;
        }
        if (Counter > 1)
            cout << "Not Prime\n";
        else 
            cout << "Prime\n";
    }
}
