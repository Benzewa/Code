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
		fgets(Buffer, 100, READ);
		//fgets how it works
		//**read a line of the file and store in buffer
		//**when it encounters first newline it will stop
		//**otherwise it will go until 100 characters
		printf("%s\n", Buffer);
		fclose(READ);
	}
	return (0);
}
//fgets
//will stop when it reaches the newline upto 100 characters

