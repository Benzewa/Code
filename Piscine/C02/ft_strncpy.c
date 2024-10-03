#include <unistd.h>
#include <stdio.h>
#include <string.h>
char *ft_strncpy(char *dest, char *src, int n);  
int main(void)
{
	char dest1[20];
	char dest2[20];
	ft_strncpy(dest1, "moutaz sami shaban", 3);
	printf("%s\n", dest1);
	strncpy(dest2, "moutaz sami shaban", 3);
	printf("%s\n", dest2);
}
char *ft_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
