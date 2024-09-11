#include <stdio.h>

void addOne(int *Arr, int Arrlen);
void printArr(int *Arr, int ArrLen);

int main(void)
{
	int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	void printArr(int *Arr, int ArrLen);
	addOne(Arr + 5, 5);
	void printArr(int *Arr, int ArrLen);
}

void addOne(int *Arr, int Arrlen)
{
	int i = 0;
	while (i < ArrLen)
	{
		Arr[i] += 1;
		i++;
	}
}
void printArr(int *Arr, int ArrLen)
{
	int i = 0;
	while (i < ArrLen)
	{
		printf("Arr[%d] = %d\n", i, Arr[i]);
	}
}
