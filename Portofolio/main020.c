#include <stdio.h>
int main(void)
{
	int x = 20;
	FILE *FHWrite;
	FHWrite = fopen("main020.txt", "w");
	// "w" write mode (OLD content in file is gone)
	// "a" append mode (OLD content will remain untouched)


	if(FHWrite == NULL)
	{
		printf("error Opening File\n");
		return (1);
	}
	else
	{
		fprintf(FHWrite, "Value of x : %d\n", x);
		for(int i = 0; i < 10; i++)
		{
			fprintf(FHWrite,"i : %d\n", i);
		}
		fclose(FHWrite);
	}
	return (0);

	// write mode will erase all existings from a file
	// append will just add to the existings
}
