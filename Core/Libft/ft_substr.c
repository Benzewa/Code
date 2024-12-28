#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    // str == NULL means the
    if (s == NULL)
    {
        return (size_t)-1; // handle NULL Pointer
    }
    size_t length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}
char *ft_strdup(const char *s1)
{
    // check is input string is NULL
    if (s1 == NULL)
        return NULL;
    size_t s1Len = ft_strlen(s1) + 1;   // make space for NULL terminator
    char *copy = (char *)malloc(s1Len); // dont mutiple bcs each char is one byte

    // check if malloc failed
    if (copy == NULL)
    {
        return NULL; // malloc failed
    }

    size_t i = 0;
    while (i < s1Len)
    {
        copy[i] = s1[i]; // will copy each byte including NULL terminator
        i++;
    }
    return copy;
}
// The implementation of the ft_substr function
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    // Handle edge case where input string is NULL
    if (!s)
        return NULL;

    // If start is beyond the length of the string, return an empty string
    if (start >= ft_strlen(s))
        return ft_strdup(""); // strdup creates an empty string // for you to free later

    // Allocate memory for the substring (len characters + 1 for the null terminator)
    char *substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return NULL; // Memory allocation failed

    // Copy characters from the original string to the new substring
    size_t i = 0;
    while (i < len && s[start + i] != '\0')
    {
        substr[i] = s[start + i];
        i++;
    }

    // Null-terminate the substring
    substr[i] = '\0';

    return substr; // Return the pointer to the new substring
}

// The main function to demonstrate usage
int main()
{
    // Define an example string
    char *str = "Hello, World!";

    // Define the starting index and length for the substring
    unsigned int start = 7; // Start at index 7 (i.e., 'W')
    size_t len = 5;         // Extract 5 characters

    // Get the substring using ft_substr
    char *substring = ft_substr(str, start, len);

    // Check if memory allocation failed
    if (substring == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print the result
    printf("Original String: %s\n", str);
    printf("Substring: %s\n", substring);

    // Free the allocated memory for the substring
    free(substring);

    return 0;
}
