#include <stddef.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *s1Ptr = (unsigned char *)s1; // Cast s1 to unsigned char pointer
    unsigned char *s2Ptr = (unsigned char *)s2; // Cast s2 to unsigned char pointer

    size_t i = 0;
    while (i < n)
    { // Iterate through the memory blocks
        if (s1Ptr[i] != s2Ptr[i])
        {                               // If the bytes differ
            return s1Ptr[i] - s2Ptr[i]; // Return the difference
        }
        i++; // Increment the index
    }

    return 0; // Return 0 if all bytes are identical
}

#include <stdio.h>

int main()
{
    // Test case 1: Identical memory blocks
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    int result = ft_memcmp(str1, str2, 13);
    printf("Test 1: %d\n", result); // Expected: 0 (identical)

    // Test case 2: Different memory blocks
    char str3[] = "Hello, World!";
    char str4[] = "Hello, Universe!";
    result = ft_memcmp(str3, str4, 13);
    printf("Test 2: %d\n", result); // Expected: non-zero (difference at position 7)

    // Test case 3: Zero-length comparison
    result = ft_memcmp(str1, str2, 0);
    printf("Test 3: %d\n", result); // Expected: 0 (empty blocks)

    // Test case 4: First byte differs
    char str5[] = "Hello!";
    char str6[] = "Hellx!";
    result = ft_memcmp(str5, str6, 6);
    printf("Test 4: %d\n", result); // Expected: negative (first byte 'o' vs 'x')

    // Test case 5: NULL pointer for s1
    result = ft_memcmp(NULL, str2, 13);
    printf("Test 5: %d\n", result); // Expected: -1 (NULL pointer for s1)

    // Test case 6: NULL pointer for s2
    result = ft_memcmp(str1, NULL, 13);
    printf("Test 6: %d\n", result); // Expected: -1 (NULL pointer for s2)

    return 0;
}
