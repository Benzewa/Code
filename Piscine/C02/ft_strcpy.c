#include <stdio.h>
#include <unistd.h>
char *ft_strcpy(char *dest, char *src);
int main(void)
{
	char dest[20];
	char src[] = "Super Mega Test!";
	printf("destination : %s\n", dest);
	printf("source : %s\n", src);
	ft_strcpy(dest, src);
	printf("destination : %s\n", dest);
	printf("source : %s\n", src);
}
char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
