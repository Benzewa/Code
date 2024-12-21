/* ft_strchr: Locate character in string */
int ft_strncmp(const char *s1, const char *s2, size_t n);
int main()
{
}
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n > 0)  // While we still have characters to compare
    {
        if (*s1 != *s2)  // If the characters are different
        {
            return (unsigned char)*s1 - (unsigned char)*s2;  // Return the difference of the characters
        }
        
        // If the characters are the same, move to the next characters
        s1++;
        s2++;
        
        // Decrease the number of characters to compare
        n--;
    }

    return 0;  // If all characters are the same, return 0
}

