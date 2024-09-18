#include <stdio.h>
//stopped at 01:45
int FindMax(int x, int y); // function prototype
//function prototypes are usually used in Header Files
//better code readanlity

int main(void)
{
	int Num1 = 0, Num2 = 0;
	printf("Enter Num1\n");
	scanf("%d", &Num1);
	printf("Enter Num2\n");
	scanf("%d", &Num2);
	printf("%d\n", FindMax(Num1, Num2));

	return (0);
}
int FindMax(int x, int y)
{
	return (x > y) ? x : y;
}
