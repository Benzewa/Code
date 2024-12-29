#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    unsigned char uc = (unsigned char)c; // Cast c to unsigned char
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == uc)
        { // Compare with the casted value
            return (char *)&s[i];
        }
        i++;
    }

    return NULL; // Return NULL if character is not found
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
