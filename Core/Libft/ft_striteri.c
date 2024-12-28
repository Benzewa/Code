void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}
#include <stdio.h>

void to_uppercase(unsigned int index, char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 'a' + 'A';  // Convert to uppercase
    }
}

int main() {
    char str[] = "hello world";
    printf("%s\n", str);  // Output: "hello world"
    ft_striteri(str, to_uppercase);
    printf("%s\n", str);  // Output: "HELLO WORLD"
    return 0;
}

