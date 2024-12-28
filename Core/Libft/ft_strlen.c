#include <stdio.h>
#include <stddef.h>

size_t ft_strlen(const char *s)
{
    // str == NULL means the
    if (s == NULL)
    {
        return (size_t)-1; // handle NULL Pointer
    }
    size_t length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}
int main()
{
    const char *testString = "Hello World";
    const char *emptyString = "";
    const char *singleCharString = "He";
    const char *spaceString = " ";
    const char *specialCharString = "123 $ \n";
    const char *NULLString = NULL;

    printf("the size is : %zu\n", ft_strlen(testString));
    printf("the size is : %zu\n", ft_strlen(emptyString));
    printf("the size is : %zu\n", ft_strlen(singleCharString));
    printf("the size is : %zu\n", ft_strlen(spaceString));
    printf("the size is : %zu\n", ft_strlen(specialCharString));
    printf("the size is : %zu\n", ft_strlen(NULLString));
}
