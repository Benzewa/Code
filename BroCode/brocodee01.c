#include <stdbool.h>
#include <stdio.h>
int main(void)
{
	//format specifiers
	//%.2f -> 2 decimal points
	//%5f -> minimum width

	//double Item01 = 5.58, Item02 = 122.5443, Item03 = 3333.1133422;
	//printf("01 : %8.3f\n", Item01);
	//printf("02 : %8.3f\n", Item02);
	//printf("03 : %8.3f\n", Item03);
	
	//constants : Fixed values

	//const var names better be UPPERCASE
	const float PI = 3.14159;
	printf("the PI values is %f\n", PI);

	return (0);
}
