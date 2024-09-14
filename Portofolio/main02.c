#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//malloc
	int *ptr1;
	ptr1 = malloc(sizeof(int) * 5);//create space for 5 integers //size of * numofVar
	ptr1[0] = 1;
	ptr1[1] = 2;
	ptr1[2] = 3;
	ptr1[3] = 4;
	ptr1[4] = 5;
	
	int i = 0;
	while (i < 5)
	{
		printf("ptr1[%d] : %d\n", i, ptr1[i]);
		i++;
	}

	free(ptr1);
	//free is used to free the memory allocated and makes the block of memory
	//make the memory avaliable again
	//to avoid memory leak dont forget to free
	//if you dont free you could run out of memory

	//calloc
	int *ptr2;
	ptr2 = calloc(5, sizeof(int));// (num Of Var * sizeof)
	//malloc creates space without intializing the values with zeros
	//calloc creates space and intializes the values of these variables with zeros
	//thats why calloc is more time consuming function than malloc

	ptr2[0] = 1;
	ptr2[1] = 2;
	ptr2[2] = 3;
	ptr2[3] = 4;
	ptr2[4] = 5;

	i = 0;
	while (i < 5)
	{
		printf("ptr2[%d] : %d\n", i, ptr2[i]);
		i++;
	}
	free(ptr2);
	//avoid memory leak
	//if you dont free you could run out of memory



	return (0);
}
