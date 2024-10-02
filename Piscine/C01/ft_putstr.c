#include <stdio.h>
#include <unistd.h>
void ft_putstr(char *str);
int main(void)
{
	ft_putstr("HEY MY NAME IS MOUTAZ");
	return 0;
}
void ft_putstr(char *str)
{
	int len;
	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}
