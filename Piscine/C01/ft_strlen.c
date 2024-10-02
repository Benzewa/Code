#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str);
int main(void)
{
	char *Str = "moutaz sami shaban";
	printf("the str length of %s is %d\n", Str, ft_strlen(Str));
	return 0;
}
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}
