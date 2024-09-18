#include <stdio.h>
#include <string.h>

int main(void)
{
	char Name[10] = {};
	printf("Enter Your Name\n");
	fgets(Name, 10, stdin);
	Name[strlen(Name) - 1] = '\0';
	printf("Hello %s\n", Name);
	
	while(strlen(Name) == 0)
	{
		printf("Enter your Name\n");
		fgets(Name, 10, stdin);
		Name[strlen(Name) - 1] = '\0';
	}
	
	printf("Hello %s\n", Name);
	return (0);
}
