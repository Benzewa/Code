#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	int a = 5;
	int b = 2;

	//type casting
	printf("%d / %d : %.2f\n", a, b, (double)a / b); // A is casted to double 
	//by default B will be also casted to double BSC A is casted
	
	return (0);
}
