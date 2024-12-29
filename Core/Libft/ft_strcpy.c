#include <stdio.h>
#include <stddef.h>

size_t ft_strlen(const char *s)
{
    size_t length = 0;

    // Handle string length like the second code (no NULL check)
    while (s[length] != '\0')
        length++;

    return length;
}
char *ft_strcpy(char *dst, const char *src)
{

    if (src == NULL || dst == NULL)
        return NULL; // handle of NULL pointers

    size_t srcSize = ft_strlen(src) + 1; // include space for '\0'
    size_t i = 0;
    while (i < srcSize)
    {
        dst[i] = src[i];
        i++;
    }
    return dst;
}
int main()
{
    const char *strSrc = "Hello World";
    char strDst[50];

    if (ft_strcpy(strDst, strSrc) != NULL)
    {
        printf("%s\n", ft_strcpy(strDst, strSrc));
        printf("%s\n", strDst);
    }
    else
    {
        printf("NULL POINTER");
    }
}
