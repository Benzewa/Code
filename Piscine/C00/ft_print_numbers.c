#include <unistd.h>
void	ft_print_numbers(void);
int	main(void)
{
	ft_print_numbers();
	return (0);
}
void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write (1, &x, 1);
		write (1, " ", 1);
		x++;
	}
	write(1, "\n", 1);
}
