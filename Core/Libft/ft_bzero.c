#include <stdio.h>
#include <stddef.h>

void bzero(void *s, size_t n)
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
