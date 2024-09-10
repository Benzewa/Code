#include <stdio.h>
int main(void)
{
	int a = 5;
	int b = 10;

	int *ptr; // declaring a pointer
	ptr = &a; // pointing to an address of a variable

	printf("%d\n", *ptr);
	// derefrencing the pointer which give the value of the pointed to var

	printf("address of ptr : %p\n", ptr);
	printf("address of   a : %p\n", &a);
	printf("address of   b : %p\n", &b);
	ptr = &b;
	printf("address of ptr : %p\n", ptr);

}
