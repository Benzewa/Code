#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	int NumTimes = atoi(av[2]);
	printf("Argc : %d\n", ac);

	for(int i = 0; i < NumTimes; i++)
	{
		printf("%s\n",av[1]);
	}
	return (0);
}
