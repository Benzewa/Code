#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(const char *s);
int main()
{
    printf("%d", ft_strlen("Hameeed"));
}
size_t ft_strlen(const char *s)
{
    size_t Length = 0;
    while (s[Length] != '\0')
        Length++;
    return Length;
}
