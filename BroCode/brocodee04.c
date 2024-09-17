#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h> //for abs
#include <ctype.h> //to upper to lower

int main(void)
{
	char unit;
	float temp;
	
	printf("Is the TEMP in C or F ? \n");
	scanf("%c", &unit);
	unit = toupper(unit);
	
	if(unit == 'C')
	{
		printf("Temp is in C\n");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;
		printf("temp in F is %.5f\n", temp);
	}
	else if(unit == 'F')
	{
		printf("Temp is in F\n");
		scanf("%f", &temp);
		temp = ((temp - 32 ) * 5) / 9;
		printf("temp in C is %.5f\n", temp);
	}
	else
		printf("Invalid inPut\n");

	return (0);
}
