#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *numbers;
	int size = 2;
	
	numbers = malloc(sizeof(int) * size); //intial allocating
	if(numbers == NULL) //to check if malloc was successful
	{
		printf("Memory allocation failed\n");
		return 1;
	}	
	
	int input = 0;
	int i = 0;
	
	printf("Enter Numbers and Enter -1 to Quit\n");
	
	while (input != -1)
	{
		if(i == size)
		{
			size += 2;//increase size by 2
			//size += 1 increases size by 1
			numbers = realloc(numbers, sizeof(int) * size);
			if(numbers == NULL)
			{
				printf("Memory reallocation failed\n");
				return 1;
			}
			printf("Realloc for %d ints\n",size);
		}

		scanf("%d", &input);
		if(input != -1)
		{
			numbers[i] = input;
			i++;
		}
	}

	printf("\n");
	
	int NumOfElements = i;
	int Total = 0;
	
	for(int j = 0; j < NumOfElements; j++)
	{
		printf("numbers[%d] = %d\n",j, numbers[j]);
		Total += numbers[j];
	}

	if(NumOfElements > 0)
	{
		printf("Total of Numbers is %d\n",Total);
		printf("The Avg is %d\n",Total/NumOfElements);
	}

	else
		printf("No numbers entered\n");

	free(numbers);
	return (0);
}
