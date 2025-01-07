#include "libft.h"
#include <stdio.h>
// Assuming ft_strlen and ft_strmapi are already defined.

char my_transform(unsigned int index, char c) {
    // Example transformation: convert lowercase letters to uppercase, and vice versa.
    if (c >= 'a' && c <= 'z') {
        return c - 32;  // Convert to uppercase
    } else if (c >= 'A' && c <= 'Z') {
        return c + 32;  // Convert to lowercase
    }
    return c;  // Return character unchanged if it's not a letter
}
void mytransform(unsigned int index, char *c) {
    // Example transformation: change the character to uppercase if index is even, else lowercase.
    if (index % 2 == 0 && *c >= 'a' && *c <= 'z') {
        *c = *c - 32;  // Convert to uppercase
    } else if (index % 2 != 0 && *c >= 'A' && *c <= 'Z') {
        *c = *c + 32;  // Convert to lowercase
    }
}
int main()
{
    // ft_atoi.c
    /*
    char *str[] = {
        "123",        // Positive number
        "-123",       // Negative number
        "  42",       // Leading spaces
        " +99",       // Plus sign
        "0",          // Zero
        "  -987",     // Leading spaces and negative sign
        "  2147483647", // Max 32-bit int
        "-2147483648", // Min 32-bit int
        "  0034",     // Leading zeros
        "abc123",     // Non-numeric
        " 123abc"     // Mixed with letters
    };
    for(int i = 0 ;i < sizeof(str)/sizeof(str[0]);i++)
    {
        printf("input %s : atoi ---> %d\n", str[i], ft_atoi(str[i]));
    }
    */
    /*********************************************************************************/
    // ft_bzero will not print because printf when reaches a null terminator will stop printing
    /*
    printf("\n");
    char str1[] = "Hello World";
    printf("%s\n", str1);
    ft_bzero(str1,3);
    printf("%s\n\n", str1);
    */
    /*88888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    //ft_memchr
    //char *str = "Hello World";
    //char *ret = ft_memchr(str,'W',7);
    //printf("%s\n",str);
    //printf("%s\n",ret);

    /*88888888888888888888888888888888888888888888888888888888888888888888888888888888888*/

    // ft_memcmp

    //char *str1 = "HELLO";
    //char *str2 = "HELLP";
    //char *str3 = "HELLO";
    //int result1 = ft_memcmp(str1,str2,5);
    //int result2 = ft_memcmp(str2,str3,5);
    //int result3 = ft_memcmp(str3,str1,5);
    //printf("%d\n%d\n%d", result1, result2, result3);

    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_memcpy
    //char *str1 = "12345";
    //char str2[20];
    //ft_memcpy(str2, str1, 6);
    //printf("%s\n", str2);

    /*88888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_memmove
    //char str1[5] = "12345";
    //printf("%s\n", str1);
    //ft_memmove(str1 + 1,str1,3);
    //printf("%s\n", str1);
    /*888888888888888888888*888888888888888888888888888888888888888888888888888888888888*/
    // ft_memset
    //char str[] = "Hello World";
    //printf("%s\n", str);
    //ft_memset(str,'0',5);
    //ft_bzero(str,5);
    //printf("%s\n", str);

    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_strchr
    //char *str = "HELLO";
    //char *ret = ft_strchr(str, 'L');
    //printf("%s\n", str);
    //printf("%s\n", ret);

    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // void *ft_calloc(size_t count, size_t size)
    /*
    size_t count = 5;
    size_t size = 4; // size of int
    int *arr = ft_calloc(count,size);
    if(arr)
    {
        printf("Memory allocation successful\n");
        for(size_t i = 0;i < count;i++)
        {
            printf("arr[%zu] : %d\n", i,arr[i]);
        }
    }
    else
        printf("Memory allocation Failed\n");

    // Test Case 2: Zero allocation (count == 0, should return NULL)
    size_t count2 = 0;
    size_t size2 = 4;  // Size of int is manually specified (4 bytes)
    int *arr2 = ft_calloc(count2, size2);
    if (!arr2) {
        printf("Test 2 passed: Correctly handled zero allocation\n");
    } else {
        printf("Test 2 failed: Memory should not have been allocated\n");
    }

    */

    // Test Case 3: Large allocation that may overflow (should return NULL)
    /*
    size_t count3 = 100000000;
    size_t size3 = 100;  // Manually set size
    int *arr3 = ft_calloc(count3, size3);
    if (!arr3) {
        printf("Test 3 passed: Correctly handled overflow scenario\n");
    }
    else {
        printf("Test 3 failed: Allocation should have failed\n");
    }
    */

    /*888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    
    // ft_itoa
    /*
    int n1 = 123;
    char *result = ft_itoa(n1);
    if(result)
    {
        printf("%s\n", result);
        free(result);
    }
    else
        printf("Memory allocation Failed\n");
    */
    /*88888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_strdup
    /*
    char *s = ft_strdup("Hello");
    printf("%s\n", s);  // Expected output: "Hello"
    free(s);
    
    char *s1 = ft_strdup("");
    printf("%s\n", s1);
    free(s1);
    */
    // inteded seg fault
    /*
    char *s2 = ft_strdup(NULL);
    printf("%s\n", s2);
    free(s2);
    */
    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_strlcpy
    /*
    char src[] = "Hello, world!";
    char dst[20];
    size_t result;
    
    // Test case 1: Normal copy
    result = ft_strlcpy(dst, src, sizeof(dst));
    printf("Test 1: ft_strlcpy(dst, src, sizeof(dst))\n");
    printf("Copied string: \"%s\"\n", dst);
    printf("Returned value: %zu\n\n", result);
    
    // Test case 2: Destination too small to hold the string
    char dst_small[5];
    result = ft_strlcpy(dst_small, src, sizeof(dst_small));
    printf("Test 2: ft_strlcpy(dst_small, src, sizeof(dst_small))\n");
    printf("Copied string: \"%s\"\n", dst_small);
    printf("Returned value: %zu\n\n", result);
    
    
    // Test case 3: Destination large enough for the string
    char dst_large[20];
    result = ft_strlcpy(dst_large, src, sizeof(dst_large));
    printf("Test 3: ft_strlcpy(dst_large, src, sizeof(dst_large))\n");
    printf("Copied string: \"%s\"\n", dst_large);
    printf("Returned value: %zu\n\n", result);
    
    
    // Test case 4: Empty source string
    char src_empty[] = "";
    result = ft_strlcpy(dst, src_empty, sizeof(dst));
    printf("Test 4: ft_strlcpy(dst, src_empty, sizeof(dst))\n");
    printf("Copied string: \"%s\"\n", dst);
    printf("Returned value: %zu\n\n", result);
    
    
    // Test case 5: Large source string, with a small buffer
    char src_large[] = "This is a very long string that won't fit!";
    char dst_small[5];
    result = ft_strlcpy(dst_small, src_large, sizeof(dst_small));
    printf("Test 5: ft_strlcpy(dst_small, src_large, sizeof(dst_small))\n");
    printf("Copied string: \"%s\"\n", dst_small);
    printf("Returned value: %zu\n\n", result);
    
    
    // Test case 6: Source string is exactly the size of the destination buffer
    char src_exact[] = "Exact size!";
    char dst_large[20];
    result = ft_strlcpy(dst_large, src_exact, sizeof(dst_large));
    printf("Test 6: ft_strlcpy(dst_large, src_exact, sizeof(dst_large))\n");
    printf("Copied string: \"%s\"\n", dst_large);
    printf("Returned value: %zu\n", result);
    */

    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_strlcat (error here)
    /*
    char dst[50] = "Hello ";
    const char *src = "World";
    ft_strlcat(dst, src, 50);
    printf("%s\n", dst);
    */
    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_split 
    // Test string and delimiter
    /*
    const char *s = "Hello world! How are you?";
    char c = ' ';

    // Testing ft_wordlen
    size_t word_count = ft_wordlen(s, c);
    printf("Word count: %zu\n", word_count);

    // Testing ft_split
    char **result = ft_split(s, c);

    // Print the split words
    if (result) {
        for (size_t i = 0; result[i] != NULL; ++i) {
            printf("Word %zu: %s\n", i, result[i]);
            free(result[i]); // Don't forget to free the individual strings!
        }
        free(result); // Free the array of strings
    }
    */
    /*888888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_strtrim
    /*
     // Test cases
    const char *test_str1 = "   Hello World!   ";
    const char *test_str2 = "!!!Important text!!!";
    const char *test_str3 = "  Leading and trailing spaces  ";
    const char *test_str4 = "NoTrimHere";
    const char *set = " ";  // Trim spaces

    // Testing ft_strtrim with different strings
    char *result1 = ft_strtrim(test_str1, set);
    char *result2 = ft_strtrim(test_str2, set);
    char *result3 = ft_strtrim(test_str3, set);
    char *result4 = ft_strtrim(test_str4, set);

    // Print the results
    printf("Original: \"%s\"\nTrimmed:  \"%s\"\n\n", test_str1, result1);
    printf("Original: \"%s\"\nTrimmed:  \"%s\"\n\n", test_str2, result2);
    printf("Original: \"%s\"\nTrimmed:  \"%s\"\n\n", test_str3, result3);
    printf("Original: \"%s\"\nTrimmed:  \"%s\"\n\n", test_str4, result4);

    // Free the memory
    free(result1);
    free(result2);
    free(result3);
    free(result4);
    */
    /*888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_strjoin
    // Test cases for ft_strjoin
    /*
    const char *s1 = "Hello, ";
    const char *s2 = "World!";
    const char *s3 = "Join";
    const char *s4 = "Test";
    const char *s5 = "Concatenate";
    const char *s6 = "";

    // Test 1: Normal strings
    char *result1 = ft_strjoin(s1, s2);
    printf("Result 1: \"%s\"\n", result1);
    free(result1);

    // Test 2: Empty second string
    char *result2 = ft_strjoin(s1, s6);
    printf("Result 2: \"%s\"\n", result2);
    free(result2);

    // Test 3: Empty first string
    char *result3 = ft_strjoin(s6, s2);
    printf("Result 3: \"%s\"\n", result3);
    free(result3);

    // Test 4: Both strings empty
    char *result4 = ft_strjoin(s6, s6);
    printf("Result 4: \"%s\"\n", result4);
    free(result4);

    // Test 5: Concatenating two non-empty strings
    char *result5 = ft_strjoin(s3, s4);
    printf("Result 5: \"%s\"\n", result5);
    free(result5);

    // Test 6: Longer strings
    char *result6 = ft_strjoin(s5, s6);
    printf("Result 6: \"%s\"\n", result6);
    free(result6);
    */
    /*88888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_substr
    /*
    // Test cases for ft_substr
    const char *s1 = "Hello, World!";
    const char *s2 = "Another test string";

    // Test 1: Valid substring
    char *result1 = ft_substr(s1, 7, 5); // "World"
    printf("Result 1: \"%s\"\n", result1);
    free(result1);

    // Test 2: Substring starting beyond the string length
    char *result2 = ft_substr(s1, 20, 5); // Empty string ""
    printf("Result 2: \"%s\"\n", result2);
    free(result2);

    // Test 3: Substring with length greater than remaining string
    char *result3 = ft_substr(s1, 7, 100); // "World!"
    printf("Result 3: \"%s\"\n", result3);
    free(result3);

    // Test 4: Substring from the start
    char *result4 = ft_substr(s2, 0, 7); // "Another"
    printf("Result 4: \"%s\"\n", result4);
    free(result4);

    // Test 5: Substring from the middle with a smaller length
    char *result5 = ft_substr(s2, 8, 4); // "test"
    printf("Result 5: \"%s\"\n", result5);
    free(result5);
    */
    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    /*
    // ft_putchar_fd
    ft_putchar_fd('A', 1);  // Should print 'A' to the terminal
    ft_putchar_fd('B', 1);
    //fd 1 writing  to stdout
    //fd 2 wriiting to stderr
    */
    /*888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_putendl
    /*
    // Test 1: Write a string with a newline to stdout (fd = 1)
    ft_putendl_fd("Hello, World!", 1);  // Should print "Hello, World!" followed by a newline

    // Test 2: Write a string with a newline to stderr (fd = 2)
    ft_putendl_fd("This is an error message.\n", 2);  // Should print to stderr followed by a newline

    // Test 3: Write an empty string with a newline to stdout
    ft_putendl_fd("", 1);  // Should print a newline only (empty string + newline)
    */
    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_putstr_fd
    /*
    // Test 1: Write a regular string to stdout (fd = 1)
    ft_putstr_fd("Hello, World!", 1);  // Should print "Hello, World!" to the terminal

    // Test 2: Write a string to stderr (fd = 2)
    ft_putstr_fd("This is an error message.\n", 2);  // Should print to stderr

    // Test 3: Writing an empty string to stdout
    ft_putstr_fd("", 1);  // Should print nothing (no output)
    */
    /*88888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_putnbr_fd
    /*
    // Test 1: Write a positive integer to stdout (fd = 1)
    ft_putnbr_fd(1234, 1);  // Should print "1234" to the terminal

    // Test 2: Write a negative integer to stdout (fd = 1)
    ft_putnbr_fd(-5678, 1);  // Should print "-5678" to the terminal

    // Test 3: Write zero to stdout (fd = 1)
    ft_putnbr_fd(0, 1);  // Should print "0" to the terminal

    // Test 4: Write a large positive integer to stdout (fd = 1)
    ft_putnbr_fd(2147483647, 1);  // Should print the maximum 32-bit integer

    // Test 5: Write a large negative integer to stdout (fd = 1)
    ft_putnbr_fd(-2147483648, 1);  // Should print the minimum 32-bit integer

    // Test 6: Write a positive integer to stderr (fd = 2)
    ft_putnbr_fd(42, 2);  // Should print "42" to stderr
    */
    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_strmapi
    /*
    // Test 1: Apply transformation to a regular string
    char *result1 = ft_strmapi("Hello, World!", my_transform);
    printf("Result 1: \"%s\"\n", result1);  // Should print "hELLO, wORLD!"
    free(result1);

    // Test 2: Apply transformation to an empty string
    char *result2 = ft_strmapi("", my_transform);
    printf("Result 2: \"%s\"\n", result2);  // Should print an empty string (no change)
    free(result2);

    // Test 3: Apply transformation to a string with only uppercase letters
    char *result3 = ft_strmapi("HELLO", my_transform);
    printf("Result 3: \"%s\"\n", result3);  // Should print "hello"
    free(result3);

    // Test 4: Apply transformation to a string with only lowercase letters
    char *result4 = ft_strmapi("world", my_transform);
    printf("Result 4: \"%s\"\n", result4);  // Should print "WORLD"
    free(result4);

    // Test 5: Apply transformation to a string with non-alphabetic characters
    char *result5 = ft_strmapi("12345!", my_transform);
    printf("Result 5: \"%s\"\n", result5);  // Should print "12345!" (no change to numbers or punctuation)
    free(result5);
    */
    /*8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    //ft_striteri
    /*
    // Test 1: Apply transformation to a regular string
    char str1[] = "hello world!";
    ft_striteri(str1, my_transform);
    printf("Result 1: \"%s\"\n", str1);  // Expected: "HeLlO WoRlD!"

    // Test 2: Apply transformation to an empty string
    char str2[] = "";
    ft_striteri(str2, my_transform);
    printf("Result 2: \"%s\"\n", str2);  // Expected: "" (empty string, no change)

    // Test 3: Apply transformation to a string with only lowercase letters
    char str3[] = "abcdef";
    ft_striteri(str3, my_transform);
    printf("Result 3: \"%s\"\n", str3);  // Expected: "AbCdEf"

    // Test 4: Apply transformation to a string with only uppercase letters
    char str4[] = "ABCDEF";
    ft_striteri(str4, my_transform);
    printf("Result 4: \"%s\"\n", str4);  // Expected: "aBcDeF"

    // Test 5: Apply transformation to a string with non-alphabetic characters
    char str5[] = "123!@#";
    ft_striteri(str5, my_transform);
    printf("Result 5: \"%s\"\n", str5);  // Expected: "123!@#" (no change to numbers or punctuation)
    */
    /*888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    //ft_strncmp
    /*
    // Test 1: Compare two identical strings
    char *str1 = "hello";
    char *str2 = "hello";
    int result1 = ft_strncmp(str1, str2, 5);  // Expected: 0 (strings are equal up to 5 characters)
    printf("Test 1: %d\n", result1);

    // Test 2: Compare two different strings with the same length
    char *str3 = "hello";
    char *str4 = "hella";
    int result2 = ft_strncmp(str3, str4, 5);  // Expected: > 0 (strings differ at the last character 'o' vs 'a')
    printf("Test 2: %d\n", result2);

    // Test 3: Compare two strings with different lengths
    char *str5 = "hello";
    char *str6 = "hell";
    int result3 = ft_strncmp(str5, str6, 5);  // Expected: > 0 (str5 is longer than str6)
    printf("Test 3: %d\n", result3);

    // Test 4: Compare two strings with n < length of both strings
    char *str7 = "hello";
    char *str8 = "heLlo";
    int result4 = ft_strncmp(str7, str8, 3);  // Expected: 0 (only compare the first 3 characters 'hel')
    printf("Test 4: %d\n", result4);

    // Test 5: Compare two strings where one is empty
    char *str9 = "";
    char *str10 = "hello";
    int result5 = ft_strncmp(str9, str10, 5);  // Expected: < 0 (empty string is lexicographically less)
    printf("Test 5: %d\n", result5);

    // Test 6: Compare two strings with different characters at n-th position
    char *str11 = "apple";
    char *str12 = "apricot";
    int result6 = ft_strncmp(str11, str12, 3);  // Expected: 0 (compare first 3 characters 'app')
    printf("Test 6: %d\n", result6);

    // Test 7: Compare two strings of different lengths (str2 shorter)
    char *str13 = "longer";
    char *str14 = "long";
    int result7 = ft_strncmp(str13, str14, 5);  // Expected: 0 (compare first 5 characters 'long')
    printf("Test 7: %d\n", result7);
    */
    /*888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    // ft_strrchr
    /*
    // Test 1: Find the last occurrence of 'o' in "hello world"
    char *str1 = "hello world";
    char *result1 = ft_strrchr(str1, 'o');  // Should return a pointer to the last 'o' in "hello world"
    if (result1)
        printf("Test 1: %s\n", result1);  // Expected: "o world"
    else
        printf("Test 1: Not found\n");

    // Test 2: Find the last occurrence of 'l' in "hello world"
    char *str2 = "hello world";
    char *result2 = ft_strrchr(str2, 'l');  // Should return a pointer to the last 'l' in "hello world"
    if (result2)
        printf("Test 2: %s\n", result2);  // Expected: "ll world"
    else
        printf("Test 2: Not found\n");

    // Test 3: Find the last occurrence of 'z' in "hello world"
    char *str3 = "hello world";
    char *result3 = ft_strrchr(str3, 'z');  // Should return NULL, as 'z' is not in "hello world"
    if (result3)
        printf("Test 3: %s\n", result3);
    else
        printf("Test 3: Not found\n");

    // Test 4: Find the last occurrence of ' ' (space) in "hello world"
    char *str4 = "hello world";
    char *result4 = ft_strrchr(str4, ' ');  // Should return a pointer to the space character
    if (result4)
        printf("Test 4: %s\n", result4);  // Expected: " world"
    else
        printf("Test 4: Not found\n");

    // Test 5: Find the last occurrence of '\0' (null terminator) in "hello"
    char *str5 = "hello";
    char *result5 = ft_strrchr(str5, '\0');  // Should return a pointer to the null terminator at the end
    if (result5)
        printf("Test 5: %s\n", result5);  // Expected: "" (empty string)
    else
        printf("Test 5: Not found\n");

    // Test 6: Find the last occurrence of 'e' in "hello"
    char *str6 = "hello";
    char *result6 = ft_strrchr(str6, 'e');  // Should return a pointer to 'e'
    if (result6)
        printf("Test 6: %s\n", result6);  // Expected: "ello"
    else
        printf("Test 6: Not found\n");

    // Test 7: Check for an empty string
    char *str7 = "";
    char *result7 = ft_strrchr(str7, 'a');  // Should return NULL as the string is empty
    if (result7)
        printf("Test 7: %s\n", result7);
    else
        printf("Test 7: Not found\n");
    */
    /*888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888*/
    //// Test 1: Find "world" in "hello world" with len enough to include the full match
    char *str1 = "hello world";
    char *sub1 = "world";
    char *result1 = ft_strnstr(str1, sub1, 11);  // len = 11, should find "world"
    if (result1)
        printf("Test 1: %s\n", result1);  // Expected: "world"
    else
        printf("Test 1: Not found\n");

    // Test 2: Find "world" in "hello world" with len too short to include the full match
    char *str2 = "hello world";
    char *sub2 = "world";
    char *result2 = ft_strnstr(str2, sub2, 5);  // len = 5, should not find "world"
    if (result2)
        printf("Test 2: %s\n", result2);
    else
        printf("Test 2: Not found\n");

    // Test 3: Find "world" in "hello world" but the string is empty
    char *str3 = "";
    char *sub3 = "world";
    char *result3 = ft_strnstr(str3, sub3, 5);  // Empty string, should return NULL
    if (result3)
        printf("Test 3: %s\n", result3);
    else
        printf("Test 3: Not found\n");

    // Test 4: Needle is empty string, should always return haystack
    char *str4 = "hello world";
    char *sub4 = "";
    char *result4 = ft_strnstr(str4, sub4, 5);  // Needle is empty, should return the original string
    if (result4)
        printf("Test 4: %s\n", result4);  // Expected: "hello world"
    else
        printf("Test 4: Not found\n");

    // Test 5: Find "abc" in "abcdabcd" with len large enough to include the match
    char *str5 = "abcdabcd";
    char *sub5 = "abc";
    char *result5 = ft_strnstr(str5, sub5, 8);  // len = 8, should find "abc"
    if (result5)
        printf("Test 5: %s\n", result5);  // Expected: "abc"
    else
        printf("Test 5: Not found\n");

    // Test 6: Needle longer than the haystack (should return NULL)
    char *str6 = "abc";
    char *sub6 = "abcdef";
    char *result6 = ft_strnstr(str6, sub6, 3);  // Needle is longer than haystack, should return NULL
    if (result6)
        printf("Test 6: %s\n", result6);
    else
        printf("Test 6: Not found\n");

    // Test 7: Finding a needle that appears at the start of the haystack
    char *str7 = "hello world";
    char *sub7 = "hello";
    char *result7 = ft_strnstr(str7, sub7, 11);  // len = 11, should find "hello"
    if (result7)
        printf("Test 7: %s\n", result7);  // Expected: "hello world"
    else
        printf("Test 7: Not found\n");

    // Test 8: Needle that appears at the end of haystack, with limited len
    char *str8 = "hello world";
    char *sub8 = "world";
    char *result8 = ft_strnstr(str8, sub8, 10);  // len = 10, should not find "world"
    if (result8)
        printf("Test 8: %s\n", result8);
    else
        printf("Test 8: Not found\n");

    // Test 9: Needle and haystack are the same
    char *str9 = "test";
    char *sub9 = "test";
    char *result9 = ft_strnstr(str9, sub9, 4);  // len = 4, should find "test"
    if (result9)
        printf("Test 9: %s\n", result9);  // Expected: "test"
    else
        printf("Test 9: Not found\n");
}
