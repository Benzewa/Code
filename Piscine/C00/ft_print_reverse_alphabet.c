#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    int count;

    count = 122;
    while(count>=97)
    {
        write(1,&count,1);
        count--;
    }
}
void ft_print_reverse_alphabet2(void)
{
    write(1,"zyxvwutsrqponmlkjihgfedcba",26);
}
int main(void)
{
    ft_print_reverse_alphabet();
    write(1,"\n",1);
    ft_print_reverse_alphabet2();
    return (0);
}