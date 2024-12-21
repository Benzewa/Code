#include<unistd.h>
#include<stdio.h>

int ft_isprint(int c);
int main()
{
    printf("%d",ft_isprint('A'));
}
int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}
