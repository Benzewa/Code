#include <stdio.h>
int main(void)
{
	FILE *FHWrite;//	file handle write

	//fopen ("write.txt", "w");
	//will open a file in W mode "write mode"

	FHWrite = fopen("write.txt", "w");
	//test if fopen works
	//if returns NULL it does not work
	if(FHWrite == NULL)
	{
		printf("error Opening File\n");
		return (1); //just to validate if wrong
	}
	else
	{
		fprintf(FHWrite, "Hello World\n");
		fclose(FHWrite);
	}
	//when done with the file you have to close it
	
	return (0);
	//output will be on write.txt
}
