#include <stdio.h>
int main(void)
{
	//how to write to a file.txt
	FILE *Write;
	Write = fopen("main023.txt","a");
	//w write will remove old things
	//a append will add on existing
	
	if(Write == NULL)
	{
		printf("Error opening File");
		return (1);
	}
	
	else
	{
		fprintf(Write, "Hello World\n");
		fprintf(Write, "Hello World\n");
		fprintf(Write, "Hello World\n");
		fprintf(Write, "Hello World\n");
		fclose(Write);
	}
	return (0);
}
