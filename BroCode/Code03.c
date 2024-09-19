#include <stdio.h>
int main(void)
{
	char x = 'X';
	char y = 'Y';

	printf("%c\n",x);
	printf("%c\n",y);

	char Temp = '\0';

	Temp = x;
	x = y;
	y = Temp;

	printf("%c\n",x);
	printf("%c\n",y);
}
