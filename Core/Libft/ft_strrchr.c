#include <stdio.h>
#include <limits.h> // For CHAR_MIN and CHAR_MAX

// ft_strlen: Returns the length of the string, excluding the null terminator.
size_t ft_strlen(const char *s)
{
    if (s == NULL)
    {
        return 0; // If the string is NULL, return 0
    }

    size_t length = 0;
    // Loop through each character until we find the null terminator
    while (s[length] != '\0')
    {
        length++; // Increase the length for each character
    }

    return length; // Return the total length of the string
}

// strrchr: Finds the last occurrence of character c in the string s
char *strrchr(const char *s, int c)
{
    // If the character is out of range for a valid char, return NULL
    if (c < CHAR_MIN || c > CHAR_MAX)
    {
        return NULL;
    }

    // If the string is NULL, return NULL
    if (s == NULL)
    {
        return NULL;
    }

    size_t i = ft_strlen(s); // Get the length of the string (points to the null terminator)

    // Special case: If we are looking for the null terminator '\0'
    if (c == '\0')
    {
        return (char *)&s[i]; // Return a pointer to the null terminator
    }

    // Traverse the string from the end to the beginning
    while (i > 0)
    {
        i--; // Decrement i to point to the last valid character
        if (s[i] == (char)c)
        {                         // Compare the current character with 'c'
            return (char *)&s[i]; // Return the pointer to the last occurrence of c
        }
    }

    // If the character is not found, return NULL
    return NULL;
}

int main()
{
    const char *str = "hello world";

    // Test the strrchr function by searching for different characters
    char *result = strrchr(str, 'o');
    if (result != NULL)
    {
        printf("Found 'o' at position: %ld\n", result - str); // Print the position of the last 'o'
    }
    else
    {
        printf("Character 'o' not found!\n");
    }

    // Test searching for a character that doesn't exist in the string
    result = strrchr(str, 'z');
    if (result != NULL)
    {
        printf("Found 'z' at position: %ld\n", result - str);
    }
    else
    {
        printf("Character 'z' not found!\n");
    }

    // Test searching for the null terminator
    result = strrchr(str, '\0');
    if (result != NULL)
    {
        printf("Found '\\0' (null terminator) at position: %ld\n", result - str);
    }

    return 0;
}
