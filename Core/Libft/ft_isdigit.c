#include<unistd.h>
#include<stdio.h>

int ft_isdigit(int c);
int main()
{
    printf("%d",ft_isdigit('0'));
}
int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}
