#include <stdio.h>
char *ft_strstr(const char *haystack, const char *needle)
{
    // Handle NULL pointers
    if (haystack == NULL || needle == NULL)
    {
        return NULL;
    }
    // Handle the case where needle is an empty string
    if (*needle == '\0')
    {
        return (char *)haystack; // Return haystack as needle is empty
    }
    // Initialize the index for haystack
    int i = 0;
    // Loop through each character in haystack using a while loop
    while (haystack[i] != '\0')
    {
        // If the first character of needle matches, check further
        if (haystack[i] == needle[0])
        {
            int j = 0;
            // Compare characters one by one using a while loop
            while (needle[j] != '\0' && haystack[i + j] == needle[j])
            {
                j++;
            }

            // If all characters in needle match, return the start of the match
            if (needle[j] == '\0')
            {
                return (char *)(&haystack[i]);
            }
        }
        i++; // Move to the next character in haystack
    }
    // If no match found, return NULL
    return NULL;
}

int main()
{
    char *haystack = "hello world";
    char *needle = "world";

    // Find first occurrence of "world" in "hello world"
    char *result = ft_strstr(haystack, needle);

    if (result != NULL)
    {
        printf("Found '%s' at: %s\n", needle, result); // Output: Found 'world' at: world
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}