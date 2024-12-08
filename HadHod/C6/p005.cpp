// C6 Vid 10
// Ranged For Loop (For each)
// I dont need to enter length to go through

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));

    int ArrSrc[] = {1,2,3,4,5};
    for(int i : ArrSrc)
        cout << i << " ";
    cout << "\n";

    // {1,2,3,4,5,6,7,8,9} Set
    for(int i : {1,2,3,4,5,6,7,8,9})
        cout << i << " ";
    cout << "\n";

    return 0;
}
