
#include <stddef.h>
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (s == NULL)
		return;

	i = 0;
	while (s[i] != '\0') // Keep iterating while we haven't reached the null terminator
	{
		f(i, &s[i]); // Pass the index and address of the current character
		i++;
	}
}

#include <stdio.h>

void to_uppercase(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 'a' + 'A'; // Convert to uppercase
	}
}

int main()
{
	char str[] = "hello world";
	printf("%s\n", str); // Output: "hello world"
	ft_striteri(str, to_uppercase);
	printf("%s\n", str); // Output: "HELLO WORLD"
	return 0;
}
