#include <stdio.h>
#include <stddef.h>

// ft_strlen: Returns the length of the string
size_t ft_strlen(const char *s)
{
    if (s == NULL)
        return 0; // Handle NULL Pointer

    size_t length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

// strcat: Appends s2 to s1
char *strcat(char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL)
        return NULL; // Handle NULL pointers

    size_t dstSize = ft_strlen(s1); // Length of s1
    size_t i = 0;                   // Initialize index for s2

    // Append characters of s2 to s1
    while (s2[i] != '\0')
    {
        s1[dstSize] = s2[i]; // Copy s2[i] to the end of s1
        i++;                 // Move to the next character of s2
        dstSize++;           // Move to the next position in s1
    }

    s1[dstSize] = '\0'; // Null-terminate the concatenated string
    return s1;
}

// Main function for testing
int main()
{
    char s1[50] = "Hello, ";
    const char *s2 = "World!";

    printf("Before strcat: %s\n", s1);
    strcat(s1, s2); // Concatenate s2 to s1
    printf("After strcat: %s\n", s1);

    return 0;
}
