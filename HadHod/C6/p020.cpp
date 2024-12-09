// vid 23
// formatting functions (printf)

#include <iostream>
#include <cstdio>
int main()
{
    int Page = 1, TotPages = 10;
    printf("The Page Num : %d\n",Page);
    printf("You Are on Page %d of %d\n",Page,TotPages);

    // width specification

    printf("The Page Num : %02d\n",Page);
    printf("The Page Num : %03d\n",Page);
    printf("The Page Num : %04d\n",Page);
    printf("The Page Num : %05d\n",Page);

    int A = 10,B = 20;
    printf("The Sum of %d + %d : %d",A,B,A+B);
}
