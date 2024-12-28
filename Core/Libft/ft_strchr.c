#include <stdio.h>
#include <limits.h> // For CHAR_MIN and CHAR_MAX
// ft_strlen: Returns the length of the string, excluding the null terminator.
size_t ft_strlen(const char *s)
{
    // Handle NULL pointer case to avoid crashing
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
// strchr: Finds the first occurrence of character c in the string s
char *strchr(const char *s, int c)
{
    // Handle invalid input for 'c' if it's out of the 'char' range
    if (c < CHAR_MIN || c > CHAR_MAX)
    {
        return NULL; // If c is out of the valid char range, return NULL
    }

    // Ensure the string is not NULL before proceeding
    if (s == NULL)
    {
        return NULL; // If the string is NULL, return NULL
    }

    size_t i = 0;
    // Loop through the string using array indexing style
    while (s[i] != '\0')
    { // Continue until the null terminator
        if (s[i] == (char)c)
        {                         // If the current character matches 'c'
            return (char *)&s[i]; // Return the pointer to the current character
        }
        i++; // Move to the next character in the string
    }

    // If we have reached here, the character was not found.
    // Special case: If we are looking for the null terminator '\0'
    if (c == '\0')
    {
        return (char *)&s[i]; // Return the pointer to the null terminator
    }

    // Return NULL if the character 'c' is not found in the string
    return NULL;
}

int main()
{
    const char *str = "Hello World!";

    // Test the strchr function by searching for different characters
    char *result = strchr(str, 'o');
    if (result != NULL)
    {
        printf("Found 'o' at position: %ld\n", result - str); // Print the position of 'o'
    }
    else
    {
        printf("Character 'o' not found!\n");
    }

    // Test searching for a character that doesn't exist in the string
    result = strchr(str, 'z');
    if (result != NULL)
    {
        printf("Found 'z' at position: %ld\n", result - str);
    }
    else
    {
        printf("Character 'z' not found!\n");
    }

    // Test searching for the null terminator
    result = strchr(str, '\0');
    if (result != NULL)
    {
        printf("Found '\\0' (null terminator) at position: %ld\n", result - str);
    }

    // Test invalid character 'c' out of range (e.g., large int value)
    result = strchr(str, 9999); // 9999 is out of the valid char range
    if (result == NULL)
    {
        printf("Invalid character (9999) out of valid char range!\n");
    }

    return 0;
}
