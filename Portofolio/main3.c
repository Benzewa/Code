#include <stdio.h>
#include <string.h>

double power(double x, int n);
double multi(double x , double y);

int main(void)
{
    printf("%.2f\n",power(2,4));

    return (0);
}
double multi(double x , double y)
{
    return (x * y);
}
double power(double x, int n)
{
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result = multi(result, x);
    }
    return (result);
}
