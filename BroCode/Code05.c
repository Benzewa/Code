#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	//seed is important if not used it will repeat same numbers
	srand(time(0));
	//int Num1 = rand(); //random between (0 - 32,767)
	
	int Num2 = rand() % 6; // Random (0 - 5)
	printf("%d\n",Num2);

	return (0);
}
