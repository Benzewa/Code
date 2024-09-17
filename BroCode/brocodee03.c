#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h> //for abs
#include <ctype.h> //to upper to lower

int main(void)
{
	float Sqrt = sqrt(9);
	short Pow = pow(2, 3);
	short Round = round(3.5);
	short Ceil = ceil(3.1);
	short Floor = floor(3.6);
	short Abs = abs(-100);
	
	double FAbs = abs(-1000);

	printf("%f\n", Sqrt);
	printf("%d\n", Pow);
	printf("%d\n", Round);
	printf("%d\n", Ceil);
	printf("%d\n", Floor);
	printf("%d\n", Abs);
	printf("%f\n", FAbs);


	return (0);
}
