#include <stddef.h>

size_t ft_strlen(const char *s)
{
    if (s == NULL)
    {
        return 0; // Return 0 for NULL pointer
    }

    size_t length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}

char *ft_strncpy(char *dst, const char *src, size_t len)
{
    if (src == NULL || dst == NULL)
        return NULL; // Handle NULL pointers

    size_t srcSize = ft_strlen(src); // Get the length of src (not including null terminator)
    size_t i = 0;

    // Copy up to `len` characters or until the null terminator in `src`
    while (i < len && i < srcSize)
    {
        dst[i] = src[i];
        i++;
    }

    // If `src` is shorter than `len`, fill the remaining space in `dst` with '\0'
    while (i < len)
    {
        dst[i] = '\0';
        i++;
    }

    return dst;
}
#include <stdio.h>
int main()
{
    // Test 1: ft_strlen
    const char *str1 = "Hello, World!";
    size_t len = ft_strlen(str1);
    printf("ft_strlen(\"%s\") = %zu\n", str1, len);

    const char *str2 = NULL;
    size_t len2 = ft_strlen(str2);
    printf("ft_strlen(NULL) = %zu\n", len2);

    // Test 2: ft_strncpy
    char dst[20]; // Make sure dst is large enough for testing
    const char *src1 = "Test string";

    ft_strncpy(dst, src1, 15); // Copy more than the length of src
    printf("ft_strncpy(\"%s\", \"%s\", 15) = \"%s\"\n", dst, src1, dst);

    const char *src2 = "Short";
    ft_strncpy(dst, src2, 10); // Copy less than the length of src
    printf("ft_strncpy(\"%s\", \"%s\", 10) = \"%s\"\n", dst, src2, dst);

    const char *src3 = "Tiny";
    ft_strncpy(dst, src3, 3); // Copy a smaller portion
    printf("ft_strncpy(\"%s\", \"%s\", 3) = \"%s\"\n", dst, src3, dst);

    // Test 3: ft_strncpy with NULL input
    const char *src4 = NULL;
    ft_strncpy(dst, src4, 5);                           // Handle NULL source
    printf("ft_strncpy(dst, NULL, 5) = \"%s\"\n", dst); // Should print nothing (null input)

    return 0;
}
