#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    // Handle NULL input strings
    if (!s1 || !s2)
    {
        return NULL; // Return NULL if either string is NULL
    }

    // Declare indices as size_t
    size_t i = 0;
    size_t j = 0;
    char *str;

    // Allocate memory for the concatenated string
    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1); // Updated allocation
    if (!str)
    {
        return NULL; // Return NULL if memory allocation fails
    }

    // Copy the first string (s1) into the result string
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }

    // Copy the second string (s2) into the result string
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }

    // Null-terminate the new string
    str[i] = '\0';

    return str;
}

int main()
{
    // Test case 1: Normal concatenation
    char *result1 = ft_strjoin("Hello, ", "World!");
    if (result1)
    {
        printf("Test 1 - Concatenation: %s\n", result1);
        free(result1);
    }
    else
    {
        printf("Test 1 - Error: Memory allocation failed!\n");
    }

    // Test case 2: Empty string as first argument
    char *result2 = ft_strjoin("", "World!");
    if (result2)
    {
        printf("Test 2 - Empty first string: %s\n", result2);
        free(result2);
    }
    else
    {
        printf("Test 2 - Error: Memory allocation failed!\n");
    }

    // Test case 3: Empty string as second argument
    char *result3 = ft_strjoin("Hello, ", "");
    if (result3)
    {
        printf("Test 3 - Empty second string: %s\n", result3);
        free(result3);
    }
    else
    {
        printf("Test 3 - Error: Memory allocation failed!\n");
    }

    // Test case 4: Both strings are empty
    char *result4 = ft_strjoin("", "");
    if (result4)
    {
        printf("Test 4 - Both strings empty: %s\n", result4);
        free(result4);
    }
    else
    {
        printf("Test 4 - Error: Memory allocation failed!\n");
    }

    // Test case 5: NULL as the first argument
    char *result5 = ft_strjoin(NULL, "World!");
    if (result5)
    {
        printf("Test 5 - NULL first string: %s\n", result5);
        free(result5);
    }
    else
    {
        printf("Test 5 - Error: NULL input detected!\n");
    }

    // Test case 6: NULL as the second argument
    char *result6 = ft_strjoin("Hello, ", NULL);
    if (result6)
    {
        printf("Test 6 - NULL second string: %s\n", result6);
        free(result6);
    }
    else
    {
        printf("Test 6 - Error: NULL input detected!\n");
    }

    // Test case 7: Both arguments are NULL
    char *result7 = ft_strjoin(NULL, NULL);
    if (result7)
    {
        printf("Test 7 - Both strings NULL: %s\n", result7);
        free(result7);
    }
    else
    {
        printf("Test 7 - Error: NULL input detected!\n");
    }

    return 0;
}
