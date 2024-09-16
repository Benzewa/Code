#include <stdio.h>

#define Num 5
//preprosser constant 
//global constant
//global or file scope

int x = 10;
//global variable
//and could be changed anyware
//is a bad practise
//spaghetti code 
 
int main(void)
{
	const int x = 5;
	//non changing value
	//non global 
	//local to this main only

	return (0);
}
