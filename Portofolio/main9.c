#include <stdio.h>

void printArr(int *Arr, int ArrLength);
void addOneToArr(int *Arr, int ArrLength);
int main(void)
{
	int ArrOne[] = {1, 2, 3, 4, 5};
	int ArrLen = 5;
	printf("\n");
	printArr(ArrOne, ArrLen);
	printf("\n");
	addOneToArr(ArrOne, ArrLen);
	printArr(ArrOne, ArrLen);
}
void addOneToArr(int *Arr, int ArrLength)
{
	int i = 0;
	while (i < ArrLength)
	{
		Arr[i] += 1;
		i++;
	}
}
void printArr(int *Arr, int ArrLength)
{
	int i = 0;
	while (i < ArrLength)
	{
		printf("Arr[%d] = %d\n",i,Arr[i]);
		i++;
	}
	printf("\n");
}
