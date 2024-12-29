#include <stdio.h>
#include <stdlib.h>

// Custom implementation of ft_strlen (if you don't have it, you can use the standard strlen)
size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}

// The transformation function to convert each character to uppercase
char to_upper(unsigned int index, char c)
{
    (void)index; // Ignore the index in this case, but it's there for flexibility
    if (c >= 'a' && c <= 'z')
    {
        return c - 32; // Convert lowercase letter to uppercase using ASCII values
    }
    return c; // Return character unchanged if it's not a lowercase letter
}

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *ret;
    unsigned int i;

    if (!s)
        return (0); // No need for extra NULL check on f

    ret = malloc(sizeof(char) * (ft_strlen(s) + 1)); // Allocate memory
    if (!ret)
        return (0); // If malloc fails, return NULL (0)

    i = 0;
    while (s[i]) // Loop through string until null terminator
    {
        ret[i] = f(i, s[i]); // Apply function f to each character
        ++i;
    }

    ret[i] = 0;   // Null-terminate the result string
    return (ret); // Return the newly allocated string
}

int main()
{
    // Test the ft_strmapi function with a simple example
    const char *input = "hello";
    char *result = ft_strmapi(input, to_upper); // Apply the to_upper function to each character

    // Print the result
    if (result)
    {
        printf("Original: %s\n", input);     // Output: hello
        printf("Transformed: %s\n", result); // Expected Output: HELLO

        // Free the allocated memory for the new string
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
