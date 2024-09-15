#include <stdio.h>
int main(int ac, char *av[])
{
	printf("Argc : %d\n",ac); 
	//ac == 1	./a.out
	//ac == 2 	./a.out 1
	//ac == 4 	./a.out 1 2 3
	
	for(int i = 0; i < ac; i++)
	{
		printf("Argv[%d] : %s\n", i, av[i]);
	}

	return (0);
	// 0 is the default return
	// other values are used to show Errors
	// 0 means no errors happened
	// any other numbers means an error happened
	//echo $? to see the return value on terminal
}
