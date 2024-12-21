/* ft_strchr: Locate character in string */
char *ft_strchr(const char *s, int c);
int main()
{
}
char *ft_strchr(const char *s, int c)
{
    // Step 1: Loop through each character in the string until we reach the null character ('\0')
    while (*s != '\0') {
        // Step 2: If we find the character we're looking for, return the pointer to this character
        if (*s == (unsigned char)c) {
            return (char *)s;  // Return the current pointer if the character matches
        }
        
        // Step 3: Move to the next character in the string
        s++;  // This is the same as saying s = s + 1
    }
    
    // Step 4: If we are looking for the null character ('\0') itself, return the pointer to it
    if (c == '\0') {
        return (char *)s;  // Return the pointer where the null character is located
    }
    
    // Step 5: If the character is not found, return NULL
    return NULL;
}

