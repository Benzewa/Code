#include <stdio.h>
int main(void)
{
	int Row = 0, Col = 0;
	char Symbol = 'a';

	printf("Enter Num of ROWS\n");
	scanf("%d", &Row);

	printf("Enter Num of COLS\n");
	scanf("%d", &Col);
	
	//you need to clear the buffer by adding the white space before %c
	printf("Enter SYmbol\n");
	scanf(" %c", &Symbol);

	for (int i = 0; i < Row; i++)
	{
		for(int j = 0; j < Col; j++)
		{
			printf("%c", Symbol);
		}
		printf("\n");
	}
}
