#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	if(ac == 3)
	{
		int NumTimes = atoi(av[2]);
		printf("Argc : %d\n", ac);

		for(int i = 0; i < NumTimes; i++)
		{
			printf("%s\n",av[1]);
		}
	}
	else
	{
		printf("2 Arguments Expected\n");
		return (1);//to show the erros echo $?
	}
	return (0);
}
