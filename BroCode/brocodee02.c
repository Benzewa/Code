#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	//modulus and division
	//mods should be integer
	
	int x = 5;
	int y = 2;

	printf("%d/%d : %f\n", x, y, x / (float)y);
	printf("%d/%d : %d\n", x, y, x % y);


	int Age = 0;
	char Name[25]; // if exceeded size will cause buffer Overflow
	Name[strlen(Name) - 1] = '\0';
	printf("\nhello whats your name\n");
	//scanf("%s", Name);//upto the whitespace
	fgets(Name, 25, stdin);
	printf("How old are you\n");
	scanf("%d", &Age);
	printf("Nice to mee you %sohh you are %d\n", Name, Age);
	return (0);
}
