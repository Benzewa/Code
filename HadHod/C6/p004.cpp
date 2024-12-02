// C6 Vid 10 
// Ranged Loop (for each)

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

int main()
{
    int ArrSrc[] = {1,2,3,4,5};
    for(int n : ArrSrc)
    {
        cout << n << " ";
    }
    cout << "\n";
}
