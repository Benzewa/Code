#include <stdio.h>

// isAlpha
int ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return c;
}

// isDigit
int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return c;
}

// isAlphaNumeric
// Non-Zero if c is alphaNumeric, Zero if not.
int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
        return c;
}
