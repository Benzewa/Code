#include <unistd.h>
void ft_print_alphabet(void);
int main(void)
{
	ft_print_alphabet();
}
void ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		write(1, " ", 1);
		c++;
	}
	write(1, "\n", 1);
}
