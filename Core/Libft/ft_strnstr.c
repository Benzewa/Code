#include <stdio.h>
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    // Check if either haystack or needle is NULL
    if (haystack == NULL || needle == NULL)
    {
        return NULL;
    }

    // Handle the case where needle is an empty string
    if (*needle == '\0')
    {
        return (char *)haystack; // Return haystack as needle is empty
    }

    size_t i = 0;
    // Loop through haystack, but only check up to 'len' characters
    while (i < len && haystack[i] != '\0')
    {
        // If the first character of needle matches haystack[i], check further
        if (haystack[i] == needle[0])
        {
            size_t j = 0;
            // Compare the subsequent characters of needle with haystack
            while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
            {
                j++;
            }

            // If we reach the end of needle, it means we found a match
            if (needle[j] == '\0')
            {
                return (char *)&haystack[i]; // Return pointer to the start of the match
            }
        }
        i++; // Move to the next character in haystack
    }

    // If no match is found, return NULL
    return NULL;
}

int main()
{
    // Test Case 1: Valid Match
    char *haystack1 = "hello world";
    char *needle1 = "world";
    size_t len1 = 11;
    char *result1 = ft_strnstr(haystack1, needle1, len1);
    printf("Test 1: %s\n", result1 ? result1 : "Not found");

    // Test Case 2: No Match (needle longer than haystack)
    char *haystack2 = "short";
    char *needle2 = "longer needle";
    size_t len2 = 5;
    char *result2 = ft_strnstr(haystack2, needle2, len2);
    printf("Test 2: %s\n", result2 ? result2 : "Not found");

    // Test Case 3: Empty haystack
    char *haystack3 = "";
    char *needle3 = "test";
    size_t len3 = 0;
    char *result3 = ft_strnstr(haystack3, needle3, len3);
    printf("Test 3: %s\n", result3 ? result3 : "Not found");

    // Test Case 4: Match in the middle
    char *haystack4 = "abcdefg";
    char *needle4 = "cd";
    size_t len4 = 7;
    char *result4 = ft_strnstr(haystack4, needle4, len4);
    printf("Test 4: %s\n", result4 ? result4 : "Not found");

    // Test Case 5: Match at the end
    char *haystack5 = "abcdefg";
    char *needle5 = "fg";
    size_t len5 = 7;
    char *result5 = ft_strnstr(haystack5, needle5, len5);
    printf("Test 5: %s\n", result5 ? result5 : "Not found");

    // Test Case 6: Search with len smaller than haystack length
    char *haystack6 = "hello world";
    char *needle6 = "world";
    size_t len6 = 5;
    char *result6 = ft_strnstr(haystack6, needle6, len6);
    printf("Test 6: %s\n", result6 ? result6 : "Not found");

    // Test Case 7: Search at the maximum len
    char *haystack7 = "hello world";
    char *needle7 = "world";
    size_t len7 = 11;
    char *result7 = ft_strnstr(haystack7, needle7, len7);
    printf("Test 7: %s\n", result7 ? result7 : "Not found");

    // Test Case 8: Case Sensitivity (No match)
    char *haystack8 = "Hello World";
    char *needle8 = "world";
    size_t len8 = 11;
    char *result8 = ft_strnstr(haystack8, needle8, len8);
    printf("Test 8: %s\n", result8 ? result8 : "Not found");

    // Test Case 9: Case Sensitivity (Exact match)
    char *haystack9 = "Hello World";
    char *needle9 = "World";
    size_t len9 = 11;
    char *result9 = ft_strnstr(haystack9, needle9, len9);
    printf("Test 9: %s\n", result9 ? result9 : "Not found");

    return 0;
}
