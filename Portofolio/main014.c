#include <stdio.h>
// Pre Proccessor Statement
// Better way to change the row and column numbers
// Define Create A Synonem of A VALUE
// change once

#define ROWS 3
#define COLS 3

void PrintArray(int Arr[ROWS][COLS]);
void GetArray(int Arr[ROWS][COLS]);

int main(void)
{
	//intializing the ARRAY with zeros
	int Data[ROWS][COLS] = {};

	GetArray(Data);
	PrintArray(Data);
}
void PrintArray(int Arr[ROWS][COLS])
{
	int i = 0;
	int j = 0;
	while (i < ROWS)
	{
		j = 0;
		while (j < COLS)
		{
			printf("Arr [%d,%d]  :  %d  ",i, j, Arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
void GetArray(int Arr[ROWS][COLS])
{
	int i = 0;
	int j = 0;
	while (i < ROWS)
	{
		j = 0;
		while (j < COLS)
		{
			printf("enter Arr[%d][%d] : ", i,  j);
			scanf("%d", &Arr[i][j]);
			j++;
		}
		i++;
	}
}
