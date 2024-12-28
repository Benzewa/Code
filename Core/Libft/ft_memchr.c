#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    // Check if the source pointer is NULL or if n is 0
    if (s == NULL || n == 0)
    {
        return NULL;
    }

    unsigned char *ptr = (unsigned char *)s; // Cast `s` to unsigned char pointer
    unsigned char F = (unsigned char)c;      // Convert `c` to unsigned char

    size_t i = 0;
    while (i < n)
    { // We check for `n` bytes
        if (ptr[i] == F)
        {                   // Compare each byte with `c`
            return &ptr[i]; // Return a pointer to the first match
        }
        i++;
    }

    return NULL; // Return NULL if no match found
}
#include <stdio.h>

int main()
{
    char str[] = "Hello, World!";

    // Test for valid search
    char *result = ft_memchr(str, 'o', 13); // Searching in the first 13 bytes of str
    if (result != NULL)
    {
        printf("Found 'o' at position: %ld\n", result - str); // Position in the string
    }
    else
    {
        printf("'o' not found\n");
    }

    // Test for character not found
    result = ft_memchr(str, 'z', 13);
    if (result != NULL)
    {
        printf("Found 'z' at position: %ld\n", result - str);
    }
    else
    {
        printf("'z' not found\n");
    }

    // Test for NULL pointer
    result = ft_memchr(NULL, 'o', 13);
    if (result == NULL)
    {
        printf("NULL pointer correctly handled\n");
    }

    // Test for zero-length search
    result = ft_memchr(str, 'o', 0);
    if (result == NULL)
    {
        printf("Zero-length search correctly handled\n");
    }

    return 0;
}
