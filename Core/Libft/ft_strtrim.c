#include <stdlib.h>
#include <string.h>

static int is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int len;
    char *result;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    end = strlen(s1) - 1;
    while (end >= start && is_in_set(s1[end], set))
        end--;
    if (start > end)
        return (strdup(""));
    len = end - start + 1;
    result = (char *)malloc(len + 1);
    if (!result)
        return (NULL);
    for (int i = 0; i < len; i++)
        result[i] = s1[start + i];
    result[len] = '\0';
    return (result);
}
