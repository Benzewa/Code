#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    // str == NULL means the
    if (s == NULL)
    {
        return (size_t)-1; // handle NULL Pointer
    }
    size_t length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

char *ft_strdup(const char *s1)
{
    // check is input string is NULL
    if (s1 == NULL)
        return NULL;
    size_t s1Len = ft_strlen(s1) + 1;   // make space for NULL terminator
    char *copy = (char *)malloc(s1Len); // dont mutiple bcs each char is one byte

    // check if malloc failed
    if (copy == NULL)
    {
        return NULL; // malloc failed
    }

    size_t i = 0;
    while (i < s1Len)
    {
        copy[i] = s1[i]; // will copy each byte including NULL terminator
        i++;
    }
    return copy;
}
int main()
{
    const char *str = "hello World";
    char *copy = ft_strdup(str);

    if (copy != NULL)
    {
        printf("%s\n", copy);
        free(copy);
    }
    else
    {
        printf("Memory allocation Failed\n");
    }
}
