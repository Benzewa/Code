//array notation
#include <stdio.h>
int main(void)
{
	int arr[] = {1, 2, 3};
	int *ptr;
	ptr = arr;
	// or ptr = &arr[0] //which means assign the ptr to point
	// at the address to the first element of the array

	printf("%d\n",ptr[0]);
	printf("%d\n",ptr[1]);
	printf("%d\n",ptr[2]);

	printf("New\n");
	int i = 0;
	while (i < 3)
	{
		printf("%d\n",ptr[i]);
		i++;
	}

	return (0);
}
