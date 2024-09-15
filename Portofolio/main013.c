#include <stdio.h>
// Pre Proccessor Statement
// Better way to change the row and column numbers
// Define Create A Synonem of A VALUE
// change once

#define ROWS 3
#define COLS 3
int main(void)
{
	int i = 0;
	int j = 0;
	int Data[ROWS][COLS] = {};
	i = 0;
	while (i < ROWS)
	{
		j = 0;
		while (j < COLS)
		{
			scanf("%d", &Data[i][j]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < ROWS)
	{
		j = 0;
		while (j < COLS)
		{
			printf("Arr [%d,%d]  :  %d  ",i, j, Data[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
