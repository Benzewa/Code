#include<unistd.h>
#include<stdio.h>

int ft_isascii(int c);
int main()
{
    printf("%d",ft_isascii('A'));
}
int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}
