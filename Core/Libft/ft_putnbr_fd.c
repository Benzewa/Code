#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    int sign;
    char c;

    sign = 1;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        sign = -1;
    }
    if (n / 10)
        ft_putnbr_fd(n / 10 * sign, fd);
    c = '0' + n % 10 * sign;
    ft_putchar_fd(c, fd);
}

int main()
{
    // Test ft_putchar_fd
    ft_putchar_fd('A', 1);  // Should print 'A' to standard output
    ft_putchar_fd('\n', 1); // Print newline

    // Test ft_putnbr_fd with positive numbers
    ft_putnbr_fd(123, 1);   // Should print "123" to standard output
    ft_putchar_fd('\n', 1); // Print newline

    // Test ft_putnbr_fd with negative numbers
    ft_putnbr_fd(-456, 1);  // Should print "-456" to standard output
    ft_putchar_fd('\n', 1); // Print newline

    // Test ft_putnbr_fd with zero
    ft_putnbr_fd(0, 1);     // Should print "0" to standard output
    ft_putchar_fd('\n', 1); // Print newline

    return 0;
}
