#include <stdio.h>

//pass by Ref or pass by Pointer

void addOne(int *ptr);

int main(void)
{
	int a = 5;
	printf("%d\n",a);
	addOne(&a);
	printf("%d\n",a);
}
void addOne(int *ptr)
{
	*ptr += 1;
}
