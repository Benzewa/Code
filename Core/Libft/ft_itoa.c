#include <stdlib.h> // for malloc and free
#include <stdio.h>  // for printf (testing)

#include <stdlib.h>

#include <stdlib.h>

static int ft_numlen(int n, int base)
{
    int count = 0;

    // Handle the special case for zero
    if (n == 0)
        return 1;

    // Handle negative numbers if the base is 10
    if (n < 0 && base == 10)
        count++;

    // Count the number of digits
    while (n != 0)
    {
        n /= base;
        count++;
    }

    return count;
}

char *ft_itoa(int n)
{
    int len;
    char *result;
    const char *digits = "0123456789";

    // Get the length of the string required to represent the integer
    len = ft_numlen(n, 10);

    // Allocate memory for the string (including space for the null terminator)
    result = malloc(sizeof(char) * (len + 1));
    if (!result)
        return NULL;

    // Null-terminate the string
    result[len] = '\0';

    // Handle the special case where n is 0
    if (n == 0)
    {
        result[0] = '0';
        return result;
    }

    // Handle negative numbers for base 10
    if (n < 0)
    {
        result[0] = '-';
        n = -n; // Make n positive for the conversion
    }

    // Convert the integer to a string
    while (n > 0)
    {
        result[--len] = digits[n % 10];
        n /= 10;
    }

    return result;
}

int main()
{
    int num = -1234;
    char *str = ft_itoa(num);

    // If the conversion was successful, print the result
    if (str != NULL)
    {
        printf("The string representation of %d is: %s\n", num, str);
        free(str); // Free the memory allocated by ft_itoa
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
