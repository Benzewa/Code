#include <stdio.h>
size_t ft_strlcpy(char *dest, const char *src, size_t size);
int main()
{
}
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i = 0;

    // If size is 0, just return the length of src
    if (size == 0)
        return ft_strlen(src);

    // Copy up to size-1 characters from src to dest
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }

    // Null-terminate dest
    dest[i] = '\0';

    // Return the length of src
    return ft_strlen(src);
}

