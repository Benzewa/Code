#include<unistd.h>  
#include<stdio.h>

int ft_memset(void *b, int c, size_t len);
int main()
{
    printf("%d",ft_me);
}
/* ft_memset: Fill memory with constant byte */
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char *)b;
    while (len--)
        *ptr++ = (unsigned char)c;
    return b;
}
