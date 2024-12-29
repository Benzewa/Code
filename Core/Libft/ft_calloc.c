#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * ft_calloc - Allocates memory for an array of `count` elements, each of size `size`,
 * and initializes the memory to zero.
 *
 * @count: The number of elements to allocate.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if the allocation fails.
 */
void *ft_calloc(size_t count, size_t size)
{
    void *allocated_memory;

    // Check for potential overflow (size * count exceeds the platform's limit)
    if (count && size > SIZE_MAX / count)
    {
        return NULL; // Return NULL if the allocation would overflow
    }

    // Allocate memory for the requested number of elements
    allocated_memory = malloc(count * size);
    if (!allocated_memory)
    {
        return NULL; // Return NULL if memory allocation fails
    }

    // Initialize the allocated memory to zero
    ft_bzero(allocated_memory, count * size);

    return allocated_memory; // Return the pointer to the allocated memory
}

int main()
{
    // Define the size and count for memory allocation
    size_t count = 5;          // We want to allocate memory for 5 integers
    size_t size = sizeof(int); // Each element is of size 'int'

    // Use ft_calloc to allocate and zero-initialize the memory
    int *arr = ft_calloc(count, size);

    // Check if allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Return an error code if allocation fails
    }

    // Print the values in the allocated memory (should be all zeroes)
    for (size_t i = 0; i < count; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
