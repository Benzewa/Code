#include <stdio.h>
#include <string.h>

void FindMax(int a, int b);
int FinMax (int a, int b);
float Triple(float Num);

int	main(void)
{
	int a = 100;
	int b = 50;
	
	FindMax(a, b);
	printf("equal to %d\n",FinMax(a, b));
	printf("%f\n",Triple(2.5));
	return (0);
}

void FindMax(int a, int b)
{
	if(a > b)
		printf("Max is A\n");
	else
		printf("Max is B\n");
}

int FinMax (int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

float Triple(float Num)
{
	return (Num * 3);
}