#include <stdio.h>
#include <stddef.h>

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
    // Handle NULL pointers
    if (dst == NULL || src == NULL)
        return 0;

    size_t dstLen = ft_strlen(dst); // Length of the current string in dst
    size_t srcLen = ft_strlen(src); // Length of the source string

    // If dstsize is zero, no room to append anything, return length of src
    if (dstsize == 0)
        return srcLen;

    // If dstsize is less than or equal to the current length of dst,
    // there's no room to append anything from src
    if (dstsize <= dstLen)
        return dstsize + srcLen;

    size_t i = 0;

    // Append characters of src to dst as long as there's space
    while (src[i] != '\0' && (i < dstsize - dstLen - 1)) // Leave space for null terminator
    {
        dst[dstLen + i] = src[i]; // Copy src[i] to the end of dst
        i++;                      // Move to the next character of src
    }

    dst[dstLen + i] = '\0'; // Null-terminate the concatenated string

    // Return the total length of the concatenated string
    return dstLen + srcLen;
}

// Main function for testing
int main()
{
    char dst[20] = "Hello, ";
    const char *src = "World!";
    size_t dstsize = 20; // Size of the destination buffer

    // Test with valid inputs
    printf("Before strlcat: %s\n", dst);
    size_t result = strlcat(dst, src, dstsize);
    printf("After strlcat: %s\n", dst);
    printf("Result (total length that would have been created): %zu\n", result);

    // Test with dstsize too small
    char dst_small[10] = "Hello, ";
    result = strlcat(dst_small, src, sizeof(dst_small));
    printf("After strlcat with small dst: %s\n", dst_small);
    printf("Result: %zu\n", result);

    // Test with zero dstsize (no space to append)
    result = strlcat(dst, src, 0);
    printf("After strlcat with zero dstsize: %s\n", dst);
    printf("Result: %zu\n", result);

    // Test with NULL src or dst
    result = strlcat(NULL, src, sizeof(dst));
    printf("Result with NULL dst: %zu\n", result);
    result = strlcat(dst, NULL, sizeof(dst));
    printf("Result with NULL src: %zu\n", result);

    return 0;
}
