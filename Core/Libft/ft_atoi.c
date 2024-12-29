#include <limits.h> // For INT_MAX and INT_MIN

int ft_atoi(const char *str)
{
    int sign = 1;    // Store the sign of the number
    long result = 0; // Use a long to avoid overflow during computation

    // Skip leading whitespace characters (space, tabs, newlines, etc.)
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        ++str;

    // Handle optional sign (+ or -)
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1; // Negative number
        ++str;         // Move to the next character
    }

    // Convert the number characters to integer
    while (*str >= '0' && *str <= '9')
    {
        // Update the result with the current digit
        result = result * 10 + (*str - '0');

        // Check for overflow before casting to int
        if (result > INT_MAX)
            return (sign == 1 ? INT_MAX : INT_MIN);

        ++str;
    }

    // Return the final result, adjusting for the sign
    return (int)(sign * result);
}

#include <stdio.h>
#include <limits.h>

// Declare the ft_atoi function (you should include your implementation here)
int ft_atoi(const char *str);

int main()
{
    printf("%d\n", ft_atoi("123"));
    printf("%d\n", ft_atoi("-123"));
    printf("%d\n", ft_atoi("  +42abc"));
    printf("%d\n", ft_atoi("++123"));
    printf("%d\n", ft_atoi("--123"));

    return 0;
}
