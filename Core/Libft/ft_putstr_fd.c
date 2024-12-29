#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return;
    write(fd, s, ft_strlen(s));
}

int main()
{
    ft_putstr_fd("Hello, World!\n", 1); // Writes to standard output (stdout)
    return 0;
}
