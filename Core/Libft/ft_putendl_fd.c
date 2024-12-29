#include <unistd.h>

// Function to write a string followed by a newline to a file descriptor
void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}

int main()
{
    // Test ft_putchar_fd
    ft_putchar_fd('A', 1);  // Should print 'A' to standard output
    ft_putchar_fd('\n', 1); // Print newline

    // Test ft_strlen
    size_t len = ft_strlen("Hello, World!");
    ft_putstr_fd("Length of 'Hello, World!' is: ", 1);
    ft_putchar_fd('0' + (len / 10), 1); // Printing the tens place of the length
    ft_putchar_fd('0' + (len % 10), 1); // Printing the ones place of the length
    ft_putchar_fd('\n', 1);             // Print newline

    // Test ft_putstr_fd
    ft_putstr_fd("Hello, World!", 1); // Should print "Hello, World!" to standard output
    ft_putchar_fd('\n', 1);           // Print newline

    // Test ft_putendl_fd
    ft_putendl_fd("Hello, World!", 1); // Should print "Hello, World!" followed by a newline to standard output

    return 0;
}
