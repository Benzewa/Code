#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
    // Check for NULL pointer (to avoid crashes)
    if (s == NULL)
        return;

    // If n is 0, nothing to zero out, so just return
    if (n == 0)
        return;

    // Proceed to set the memory to zero
    unsigned char *ptr = (unsigned char *)s;

    // Set each byte to 0
    size_t i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}
void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (count && size > 0x10000000000 / count)
	{
		return (NULL);
	}
	ret = malloc(size * count);
	if (!ret)
		return (NULL);
	ft_bzero(ret, size * count);
	return (ret);
}
int main() {
    // Define the size and count for memory allocation
    size_t count = 5;   // We want to allocate memory for 5 integers
    size_t size = sizeof(int); // Each element is of size 'int'

    // Use ft_calloc to allocate and zero-initialize the memory
    int *arr = ft_calloc(count, size);

    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Return an error code if allocation fails
    }

    // Print the values in the allocated memory (should be all zeroes)
    for (size_t i = 0; i < count; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
