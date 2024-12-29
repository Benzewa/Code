#include <stddef.h> // For size_t


void *ft_memmove(void *dst, const void *src, size_t len)
{
    // Return NULL if either destination or source is NULL
    if (dst == NULL || src == NULL)
        return NULL;

    unsigned char *dst2 = (unsigned char *)dst;
    unsigned char *src2 = (unsigned char *)src;

    // If the source is before the destination, copy backwards to avoid overwriting
    if (src2 < dst2)
    {
        // Start from the end and move backward
        for (size_t i = len; i > 0; i--)
        {
            dst2[i - 1] = src2[i - 1]; // Copy byte-by-byte from the end to the start
        }
    }
    else
    {
        // If the source is after the destination, copy forwards
        for (size_t i = 0; i < len; i++)
        {
            dst2[i] = src2[i]; // Copy byte-by-byte from start to end
        }
    }

    return dst; // Return the original destination pointer
}

#include <stdio.h>

int main()
{
    // Test 1: No overlap (memcpy behavior)
    char src1[] = "Hello, World!";
    char dst1[20];
    ft_memmove(dst1, src1, 13);
    dst1[13] = '\0'; // Null-terminate the string
    printf("Test 1 - No overlap: %s\n", dst1);

    // Test 2: Source is before destination (overlap)
    char overlap_src1[] = "Hello, World!";
    printf("Before ft_memmove (overlap): %s\n", overlap_src1);
    ft_memmove(overlap_src1 + 6, overlap_src1, 7); // Overlapping copy from the beginning
    printf("After ft_memmove (overlap): %s\n", overlap_src1);

    // Test 3: Zero-length copy
    char src2[] = "Zero length";
    char dst2[20];
    ft_memmove(dst2, src2, 0); // Nothing should happen
    printf("Test 3 - Zero-length copy: %s\n", dst2);

    return 0;
}
