#include <stdio.h>
#include <stdlib.h>

// Custom implementation of ft_strlen (if you don't have it, you can use the standard strlen)
size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

// The transformation function to convert each character to uppercase
char to_upper(unsigned int index, char c)
{
    (void)index;  // Ignore the index in this case, but it's there for flexibility
    if (c >= 'a' && c <= 'z') {
        return c - 32;  // Convert lowercase letter to uppercase using ASCII values
    }
    return c;  // Return character unchanged if it's not a lowercase letter
}

// The main function that transforms the string based on the provided function f
char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    // 1. Check if the input string is NULL
    if (!s)
        return NULL;  // If the string is NULL, return NULL

    // 2. Allocate memory for the new string (including space for the null terminator)
    char *ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!ret)
        return NULL;  // Memory allocation failed, return NULL

    // 3. Initialize index for the loop
    unsigned int i = 0;

    // 4. Loop through the string and apply the transformation function
    while (s[i])  // Continue until we reach the null terminator
    {
        ret[i] = f(i, s[i]);  // Apply the transformation function to each character
        ++i;  // Move to the next character
    }

    // 5. Add the null terminator to the new string
    ret[i] = '\0';

    // 6. Return the newly created string
    return ret;
}

int main()
{
    // Test the ft_strmapi function with a simple example
    const char *input = "hello";
    char *result = ft_strmapi(input, to_upper);  // Apply the to_upper function to each character

    // Print the result
    if (result) {
        printf("Original: %s\n", input);  // Output: hello
        printf("Transformed: %s\n", result);  // Expected Output: HELLO

        // Free the allocated memory for the new string
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

