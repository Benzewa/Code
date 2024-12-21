/* ft_strchr: Locate character in string */
char *ft_strrchr(const char *s, int c);
int main()
{
}
char *ft_strrchr(const char *s, int c)
{
    char *last_found = NULL;  // Start with no match found yet

    while (*s != '\0') {  // Loop until we hit the null terminator
        if (*s == (unsigned char)c) {  // If the current character matches 'c'
            last_found = (char *)s;  // Save the location of the match
        }
        s++;  // Move to the next character
    }

    if (c == '\0') {
        return (char *)s;  // Return the pointer to the null terminator if we're searching for it
    }

    return last_found;  // Return the last found match, or NULL if not found
}

