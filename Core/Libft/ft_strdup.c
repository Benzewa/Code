#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    // Get the length of the input string
    size_t len = ft_strlen(s1);

    // Allocate memory for the duplicate string (+1 for the null terminator)
    char *ret = malloc(len + 1);
    if (ret == NULL)
        return NULL; // Return NULL if memory allocation fails

    // Copy the string into the newly allocated memory, including the null terminator
    ft_strlcpy(ret, s1, len + 1);

    return ret; // Return the duplicated string
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
