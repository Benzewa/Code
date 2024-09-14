#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *Numbers;
	int Size;
	Size = 2;

	Numbers = malloc(sizeof(int) * Size);
	if(Numbers == NULL)
	{
		printf("Memory Allocation Fail tester\n");
		return (1);
	}
	int Input = 0;
	int i = 0;

	printf("Enter Numbers to Exit Enter -1 to QUIT\n");

	while(Input != -1)
	{
		if(i == Size)
		{
			Size += 2;
			Numbers = realloc(Numbers, sizeof(int) * Size);
			if(Numbers == NULL)
			{
				printf("Memory Allocation Fail Tester\n");
				return(1);
			}
			printf("Realloc for %d ints\n",Size);
		}
		scanf("%d", &Input);
		if(Input != -1)
		{
			Numbers[i] = Input;
			i++;
		}
	}
	printf("\n");
	int NumOfElements = i;
	int Total = 0;

	i = 0;
	while (i < NumOfElements)
	{
		printf("Num[%d] = %d\n",i,Numbers[i]);
		Total += Numbers[i];
		i++;
	}
	if(NumOfElements > 0)
	{
		printf("Total of Numbers is %d\n",Total);
		printf("The Average is %d\n",Total/NumOfElements);
	}
	else
		printf("No Numbers Entered\n");
	
	free(Numbers);

	return (0);
}
