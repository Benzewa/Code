#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);
int main(void)
{
	int	a;
	int	b;
	a = 5;
	b = 2;
	
	printf("a   : %d, b   : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div : %d, mod : %d\n", a, b);

	return 0;
}
void ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
