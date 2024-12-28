#include <stdio.h>
#include <stddef.h>
void *ft_memset(void *b, int c, size_t len)
{
    if (b == NULL) // Handle NULL pointer
        return NULL;

    unsigned char *ptr = (unsigned char *)b; // Treat 'b' as a pointer to unsigned char
    unsigned char value = (unsigned char)c;  // Convert 'c' to an unsigned char

    // If len is 0, there's nothing to do, but return the original pointer
    if (len == 0)
        return b;

    size_t i = 0;
    while (i < len)
    {
        ptr[i] = value; // Set each byte to 'value'
        i++;
    }

    return b; // Return the original pointer
}
int main()
{
    // Test 1: Set a string to 'A'
    char arr[10] = "Hello";
    printf("Before memset: %s\n", arr);
    ft_memset(arr, 'A', 5); // Fill the first 5 bytes with 'A'
    printf("After memset:  %s\n", arr);

    // Test 2: Handle NULL pointer (should return NULL)
    char *nullPointer = NULL;
    printf("memset with NULL pointer: %p\n", ft_memset(nullPointer, 'X', 5));

    // Test 3: Set to 0
    char arr2[10] = "Hello";
    ft_memset(arr2, 0, 5); // Fill the first 5 bytes with '\0'
    printf("After memset to 0: %s\n", arr2);

    // Test 4: Test with len = 0 (No change should happen)
    char arr3[10] = "Hello";
    ft_memset(arr3, 'B', 0); // No bytes to set
    printf("After memset with len=0: %s\n", arr3);

    // Test 5: Set an array of integers
    int nums[5] = {1, 2, 3, 4, 5};
    printf("Before memset on int array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    ft_memset(nums, 0, 3 * sizeof(int)); // Set the first 3 integers to 0
    printf("After memset on int array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
