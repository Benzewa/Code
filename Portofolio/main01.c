//dynamic allocated memory
//malloc
//calloc 
//realloc
//free

#include <stdio.h>
#include <stdlib.h> // to have the dynamic memory (Heap)

int main(void)
{
	int Num = 10;
	//regular variables are stored in a stack
	//its called stack because they are stack on top of each other
	//even functions variables are stored into the stack
	//in the stack way of storing you will not be able to change arrays size
	//because the next made variables will be having its location

	//dynamically allocated memory lives inside the heap 
	//here where the dynamically allocated memory shine

	int *ptr;
	ptr = malloc(sizeof(int) * 5);//create space for 5 integers
	ptr[0] = 1;
	ptr[1] = 2;
	ptr[2] = 3;
	ptr[3] = 4;
	ptr[4] = 5;

	int i = 0;
	while (i < 5)
	{
		printf("ptr[%d] : %d\n", i, ptr[i]);
		i++;
	}
	return (0);
}
