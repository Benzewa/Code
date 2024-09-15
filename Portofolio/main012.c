#include <stdio.h>
#include <stdlib.h>

// 2D Arrays
// Nested LOOPS

int main(void)
{
	int Data[3][3] = {{1,2,3},
		              {4,5,6},
					  {7,8,9}};	
	// Nested LOOPS
	int i = 0;
	while (i < 3)
	{
		int j = 0;
		while (j < 3)
		{
			printf("[%d][%d]  :  %d  ",i, j, Data[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
