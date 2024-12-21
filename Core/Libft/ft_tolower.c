#include<unistd.h>
#include<stdio.h>

int ft_isalpha(int c);
int main()
{
    printf("%d",ft_islower('A'));
}
/* ft_tolower: Convert uppercase to lowercase */
int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return c;
}
