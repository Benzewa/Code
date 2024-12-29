#include <stdio.h>
#include <stddef.h>

void bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
