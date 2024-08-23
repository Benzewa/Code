#include <unistd.h>
void ft_print_alphabet(void)
{
    char    count;

    count = 'a';
    while (count <= 'z')
    {
        write(1,&count,1);
        count++;
    }
}
void ft_print_alphabet2(void)
{
    write(1,"abcdefghijklmnopqrstuvxyz",26);
}
int main(void)
{
    ft_print_alphabet();
    write(1,"\n",1);
    ft_print_alphabet2();
    return (0);
}