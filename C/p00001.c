#include <stdio.h>
#include <unistd.h>
int main(void)
{
	printf("Hello World\n");
	write(1,"HELLO WORLD\n",12);
	return (0);
}
