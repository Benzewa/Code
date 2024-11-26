#include <stdio.h>

int ft_strlen(const char *str)
{
    int Len = 0;
    while (str[Len] != '\0')
    {
        Len ++;
    }
    return Len;
}

char *ft_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strcat(char *dest, char const *src)
{
    int i; //dest index
    int j; //src  index
    
    // get to the end of dest string
    while(dest[i] != '\0')
        i++;

    // Append src to dest
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] == '\0';
    return dest;
}

char *ft_strncat(char *dest, const char *src, int n)
{
    int dest_len = ft_strlen(dest);

    // Append up to n Characters from src to dest
    for(int i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}

int ft_strcmp(const char *S1, const char *S2)
{
    int i = 0;
    while (S1[i] != '\0' && S2[i] != '\0')
    {
        if(S1[i] != S2[i])
        {
            return S1[i] - S2[i];
        }
        i++;
    }
    return S1[i] - S2[i];
}

int ft_strncmp(const char *s1, const char *s2, int n)
{
    while(n > 0 && *s1 && *s2)
    {
        if(*s1 != *s2)
        {
            return *s1 - *s2;
        }
        s1++;
        s2++;
        n--;
    }
    if(n > 0)
    {
        return *s1 - *s2;
    }
    return 0;
}














