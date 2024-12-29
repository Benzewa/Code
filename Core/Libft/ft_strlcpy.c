#include <stddef.h>

size_t ft_strlcpy(char dst[], const char src[], size_t dstsize)
{
    size_t i;

    i = 0;
    // Copy characters from src to dst until the destination array is full
    while (src[i] && i + 1 < dstsize)
    {
        dst[i] = src[i]; // Copy character
        ++i;
    }

    // If there is space left in dst, null-terminate the string
    if (i < dstsize)
        dst[i] = '\0'; // Null-terminate

    // Count the remaining characters in src
    while (src[i])
        ++i;

    return i; // Return the total length of src
}

int main()
{
    char src[] = "Hello, World!";
    char dst[20]; // Ensure this is large enough to hold the copied string

    size_t copied_length = ft_strlcpy(dst, src, sizeof(dst));

    // Output the copied string and the total length of the source string
    printf("Source string: %s\n", src);
    printf("Destination string after copy: %s\n", dst);
    printf("Total length of source string: %zu\n", copied_length);

    return 0;
}
