#include<unistd.h>
#include<stdio.h>
int ft_isalnum(int c);
int main()
{
    printf("%d",ft_isalnum('A'));
}
int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}
