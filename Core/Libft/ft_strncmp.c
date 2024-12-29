#include <stdio.h>
#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (unsigned char)s1[i] - (unsigned char)s2[i]; // Return the difference when characters differ
        }
        i++;
    }

    // If loop ends, either due to reaching n or one of the strings ending,
    // return the difference between the current characters (null terminators considered)
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

#include <stdio.h>

int main()
{
    // Test cases
    char *str1 = "hello";
    char *str2 = "hello";
    char *str3 = "hellp";
    char *str4 = "hell";
    char *str5 = "hellooooo";

    // Normal comparisons
    printf("Compare str1 and str2 (n=5): %d\n", ft_strncmp(str1, str2, 5));
    // Should print 0
    printf("Compare str1 and str3 (n=5): %d\n", ft_strncmp(str1, str3, 5));
    // Should print a negative value
    printf("Compare str1 and str4 (n=5): %d\n", ft_strncmp(str1, str4, 5));
    // Should print positive value (because 'o' > '\0')

    // Edge case: Comparing with empty strings
    printf("Compare str1 and empty string (n=5): %d\n", ft_strncmp(str1, "", 5));
    // Should print positive value (because 'h' > '\0')
    printf("Compare empty string and str2 (n=5): %d\n", ft_strncmp("", str2, 5));
    // Should print negative value (because '\0' < 'h')

    // Test with NULL strings
    char *str6 = NULL;
    printf("Compare NULL and str1: %d\n", ft_strncmp(str6, str1, 5)); // Should print negative value
    printf("Compare str1 and NULL: %d\n", ft_strncmp(str1, str6, 5)); // Should print positive value
    printf("Compare NULL and NULL: %d\n", ft_strncmp(str6, str6, 5)); // Should print 0

    // Test with n=0 (should always return 0 regardless of string content)
    printf("Compare str1 and str2 (n=0): %d\n", ft_strncmp(str1, str2, 0)); // Should print 0

    return 0;
}
