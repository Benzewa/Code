#include <stdio.h>
void ft_ft(int *nbr);
int main(void)
{
	int	a;
	int *ptr;

	ptr = &a;
	ft_ft(ptr);
	printf("address of a : %p\n",&a);
	printf("value of a : %d\n",a);
	printf("address of ptr : %p\n",ptr);
	printf("value of ptr : %d\n",*ptr);

	return 0;
}
void ft_ft(int *nbr)
{
	*nbr = 42;
}
