#include <stddef.h> // For size_t
#include <stdio.h>  // For debugging and error messages

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    // Error handling: If both dst and src are NULL, return 0 (consistent with original behavior)
    if (!dst && !src)
    {
        return (0); // Return 0 if both source and destination are NULL
    }

    unsigned char *d = dst;
    const unsigned char *s = src;

    // Copy n bytes from src to dst
    for (size_t i = 0; i < n; i++)
    {
        d[i] = s[i]; // Copy byte-by-byte from src to dst
    }

    // Return the original value of dst
    return dst;
}

#include <stdio.h>
#include <string.h>
int main()
{
    // Normal ft_memcpy test (no overlap)
    char src[] = "Hello, World!";
    char dst[20];

    ft_memcpy(dst, src, 13);
    dst[13] = '\0'; // Null-terminate the string
    printf("Source: %s\n", src);
    printf("Destination (no overlap): %s\n", dst);

    // Test for NULL src
    char *null_src = NULL;
    char dst2[20];
    if (ft_memcpy(dst2, null_src, 5) == NULL)
    {
        printf("Error: NULL source\n");
    }

    // Test for NULL dst
    char *null_dst = NULL;
    if (ft_memcpy(null_dst, src, 5) == NULL)
    {
        printf("Error: NULL destination\n");
    }

    // Test for both src and dst being NULL
    if (ft_memcpy(null_dst, null_src, 5) == NULL)
    {
        printf("Error: Both source and destination are NULL\n");
    }

    // Test for n == 0
    char dst3[20];
    if (ft_memcpy(dst3, src, 0) == dst3)
    {
        printf("Success: Zero-length copy (n == 0) handled correctly.\n");
    }

    // Test for buffer overflow (this will just show the need for the caller to ensure valid buffer sizes)
    char small_dst[5];
    if (ft_memcpy(small_dst, src, 5) == small_dst)
    {
        printf("Success: Copied 5 bytes, but caller should ensure enough space!\n");
    }

    // Test for normal case with overlap (undefined behavior)
    printf("\nTesting undefined behavior (overlap):\n");

    char overlap_src[] = "Hello, World!";
    printf("Before ft_memcpy (src): %s\n", overlap_src);

    // Copy part of the string over itself (this is undefined behavior)
    ft_memcpy(overlap_src + 6, overlap_src, 7); // Overlapping copy from the beginning

    // Print the result (undefined behavior may result in unexpected results)
    printf("After ft_memcpy (overlap): %s\n", overlap_src);

    return 0;
}
