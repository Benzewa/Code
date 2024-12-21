#include<unistd.h>
#include<stdio.h>

int ft_toupper(int c);
int main()
{
    printf("%c",ft_toupper('a'));
}
/* ft_toupper: Convert lowercase to uppercase */
int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return c;
}
