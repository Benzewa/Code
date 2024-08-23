#include <unistd.h>

void ft_print_numbers(void)
{
    int count;

    count = 48;
    while (count <= 57)
    {
        write(1,&count,1);
        count++;
    }
}

void ft_print_numbers2(void)
{
    int count;
    char c;

    count = 0;
    while (count <= 9)
    {
        c = count + '0';
        write(1,&c,1);
        count++;
    }
}

void ft_print_numbers3(void)
{
    write(1,"0123456789",10);
}

int main(void)
{
    ft_print_numbers();
    write(1,"\n",1);
    ft_print_numbers2();
    write(1,"\n",1);
    ft_print_numbers3();
    write(1,"\n",1);
    return (0);
}