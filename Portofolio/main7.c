#include <stdio.h>

void addOne(int Arr[], int ArrLen);
void PrintArr(int Arr[], int ArrLen);

int main(void)
{
	int ArrOne[6] = {1, 2, 3, 4, 5, 6};
	int ArrLength = 6;

	PrintArr(ArrOne, ArrLength);
	addOne(ArrOne, 6);
	PrintArr(ArrOne, ArrLength);
	
	return (0);
}

void addOne(int Arr[], int ArrLen)
{
	int i = 0;
	while (i < ArrLen)
	{
		Arr[i] += 1;
		i++;
	}
}
void PrintArr(int Arr[], int ArrLen)
{
	int i = 0;
	while (i < ArrLen)
	{
		printf("Arr[%d] : %d\n", i, Arr[i]);
		i++;
	}
	printf("\n");
}
