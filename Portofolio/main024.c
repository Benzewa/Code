#include <stdio.h>
int main(void)
{
	//how to READ to a file.txt
	FILE *READ;
	READ = fopen("main023.txt","r");
	//w write will remove old things
	//a append will add on existing
	//r READ from a file
	
	if(READ == NULL)
	{
		printf("Error opening File");
		return (1);
	}
	
	else
	{
		char Buffer[100];
		//fgets(Buffer, 100, READ); READs once

		while (fgets(Buffer, 100, READ) != NULL)
		{
			printf("%s", Buffer);
		}
		fclose(READ);
	}
	return (0);
}
