#include <unistd.h>
#include <stdlib.h>

/*
** Custom strdup implementation without using standard library functions.
** This implementation manually calculates string length, allocates memory,
** and copies the string to the new memory block.
*/

char    *my_strdup(const char *str)
{
    char    *copy;
    size_t  len;
    size_t  i;

    // Step 1: Check if the input string is NULL
    if (str == NULL)
    {
        return (NULL);  // Return NULL if the input string is NULL
    }

    // Step 2: Calculate the length of the input string manually
    len = 0;
    while (str[len] != '\0')  // Loop through the string to find its length
    {
        len++;
    }

    // Step 3: Allocate memory manually for the new string
    copy = (char *)malloc(len + 1);  // +1 for the null terminator
    if (copy == NULL)
    {
        return (NULL);  // Return NULL if memory allocation fails
    }

    // Step 4: Copy the string manually
    i = 0;
    while (str[i] != '\0')  // Copy each character one by one
    {
        copy[i] = str[i];
        i++;
    }

    // Step 5: Add the null terminator at the end of the new string
    copy[i] = '\0';  // Ensure the new string is null-terminated

    // Step 6: Return the new string
    return (copy);  // Return the pointer to the new string
}

int    main(void)
{
    // Example usage of my_strdup
    const char  *original = "Hello, World!";
    char        *duplicate;

    // Duplicate the string using the custom strdup implementation
    duplicate = my_strdup(original);

    // Check if the duplication was successful
    if (duplicate != NULL)
    {
        write(1, "Original: ", 10);
        write(1, original, 13);  // Print the original string
        write(1, "\n", 1);
        write(1, "Duplicate: ", 11);
        write(1, duplicate, 13);  // Print the duplicate string
        write(1, "\n", 1);

        // Free the allocated memory after use
        free(duplicate);
    }
    else
    {
        write(1, "Memory allocation failed.\n", 26);
    }

    return (0);  // Return 0 to indicate successful execution
}

