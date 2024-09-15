#include <stdio.h>
int main(void)
{
	FILE *READ;
	READ = fopen("main020.txt", "r");
	if(READ == NULL)
	{
		printf("file could not be opened\n");
		return (1);
	}
	else
	{
		char Buffer[100];
		while (fgets(Buffer, 100, READ) != NULL)//while the buffer sees sth print
		{
			printf("%s", Buffer);
		}
		fclose(READ);
	}
	return (0);
}
//fgets
//will stop when it reaches the newline upto 100 characters
//
//To make the buffer read everything
