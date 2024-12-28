#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
    // Handle NULL pointers
    if (s1 == NULL && s2 == NULL)
    {
        return 0; // Both are NULL, considered equal
    }
    if (s1 == NULL)
    {
        return -1; // NULL is considered less than any valid string
    }
    if (s2 == NULL)
    {
        return 1; // Any valid string is considered greater than NULL
    }

    int i = 0;
    // Compare characters until one string ends or a difference is found
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i]; // Return difference when characters differ
        i++;
    }

    // If loop ends, compare at the point where one string might end
    return s1[i] - s2[i];
}

int main()
{
    char *str1 = "hello";
    char *str2 = "hello";
    char *str3 = "hell";
    char *str4 = NULL;
    char *str5 = "abcd";

    printf("Compare str1 and str2: %d\n", ft_strcmp(str1, str2)); // Should print 0
    printf("Compare str1 and str3: %d\n", ft_strcmp(str1, str3)); // Should print > 0
    printf("Compare str3 and str2: %d\n", ft_strcmp(str3, str2)); // Should print < 0
    printf("Compare str1 and str4: %d\n", ft_strcmp(str1, str4)); // Should print > 0 (str1 is not NULL)
    printf("Compare str4 and str5: %d\n", ft_strcmp(str4, str5)); // Should print < 0 (NULL is considered less)

    return 0;
}
