#include<unistd.h>
#include<stdio.h>

int ft_isalpha(int c);
int main()
{
    printf("%d",ft_isalpha('A'));
}
int ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
