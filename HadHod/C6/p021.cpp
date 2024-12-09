// Vid 24 
// Float format (printf) %f
// Double format %f

#include <iostream>
int main()
{
    float PI = 3.123122;
    printf("PI : %0.2f\n",PI);
    printf("PI : %0.3f\n",PI);
    printf("PI : %0.4f\n",PI);
    printf("PI : %0.5f\n",PI);

    double d = 12.451234;
    printf("The Double Value : %0.2f\n",d);
    printf("The Double Value : %0.3f\n",d);
    printf("The Double Value : %0.4f\n",d);
    printf("The Double Value : %0.5f\n",d);
}
