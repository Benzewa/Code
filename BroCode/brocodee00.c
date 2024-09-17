#include <stdbool.h>
#include <stdio.h>

//float : 4BYTES 6 precision nums %f
//double : 8Bytes 15 precision nums %f %lf

//bool : 1BYTE (true - false) %d
//char : 1BYTE (-128 - 127) %c %d
//unsigned char : 1BYTE (0 - 255) %c %d

//short int : 2BYTE (-32768 - 32767) %d
//unsigned short int : 2BYTE (0 - 65535) %d
//int : 4BYTE (-2147483648 - 2147483647) %d
//unsigned int : 4BYTE (0 - 4294967295)  %u
//long long int : 8BYTE %lld
//unsigned long long int : 8BYTE %llu


//if the limit of memory value exceeded its called OVERFLOW
//will reset to minimum value

int main(void)
{
	// char could store an integer from (-128 - 127)
	// char is 1 Byte %c to show the char or %d to show the ascii number
	// the range is from -128 -> 127 bcs its only 1 BYTE
	
	char f = 100;
	printf("%d\n", f);
	printf("%c\n", f);

	unsigned char x = 252; 
	// an unsigned char could hold from (0 -> 255) cuz its only positives
	printf("%d\n%c\n", x, x);

	//short int //2Bytes (-32,768 -> 32,767) values
	short x = 5;
	//unsigned short int //2Bytes (0 -> 65,535) values
	return (0);
}
