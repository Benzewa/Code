/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:59:23 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:07:04 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Function to create a substring starting at 'start' with length 'len' from string 's'.
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;  // This will hold the new substring.
	size_t	str_len;  // The length of the input string 's'.
	size_t	substring_len;  // The actual length of the substring we want to extract.
	size_t	i;  // Loop counter for copying characters.

	// Step 1: Check if the string is NULL.
	if (s == NULL)
		return (NULL);  // If the string is NULL, return NULL immediately.

	// Step 2: Calculate the length of the string 's'.
	str_len = 0;
	while (s[str_len] != '\0')  // Keep counting characters until we reach the null terminator.
		str_len++;

	// Step 3: Handle the case where 'start' is beyond the length of the string.
	if (start >= str_len)
	{
		// If start is greater than or equal to the string length, return an empty string.
		substr = (char *)malloc(1);  // Allocate space for just the null terminator.
		if (!substr)  // If memory allocation fails, return NULL.
			return (NULL);
		substr[0] = '\0';  // Make it an empty string.
		return (substr);
	}

	// Step 4: Calculate how many characters we need for the substring.
	substring_len = str_len - start;  // Remaining length from 'start' to the end of the string.
	if (substring_len > len)
		substring_len = len;  // If 'len' is smaller, limit the substring length to 'len'.

	// Step 5: Allocate memory for the new substring (including space for the null terminator).
	substr = (char *)malloc(substring_len + 1);  // +1 for the null terminator.
	if (!substr)  // If memory allocation fails, return NULL.
		return (NULL);

	// Step 6: Copy the relevant part of the string to the new substring.
	i = 0;
	while (i < substring_len)
	{
		substr[i] = s[start + i];  // Copy each character from 's' to 'substr'.
		i++;
	}

	// Step 7: Null-terminate the substring.
	substr[i] = '\0';  // Mark the end of the new substring.

	// Step 8: Return the new substring.
	return (substr);
}

// Main function to test the ft_substr function
int main(void)
{
    // Test 1: Basic case - extract "world" from "Hello, world!"
    char str1[] = "Hello, world!";
    char *substr1 = ft_substr(str1, 7, 5);
    if (substr1)
    {
        printf("Test 1 - Substring: '%s'\n", substr1);  // Expected: "world"
        free(substr1);  // Don't forget to free the allocated memory.
    }
    else
    {
        printf("Test 1 - Memory allocation failed or invalid input\n");
    }

    // Test 2: Case where 'start' is out of bounds (start >= string length)
    char *substr2 = ft_substr(str1, 20, 5);
    if (substr2)
    {
        printf("Test 2 - Substring: '%s'\n", substr2);  // Expected: ""
        free(substr2);
    }
    else
    {
        printf("Test 2 - Memory allocation failed or invalid input\n");
    }

    // Test 3: Case where 'len' is greater than the remaining characters
    char *substr3 = ft_substr(str1, 7, 20);
    if (substr3)
    {
        printf("Test 3 - Substring: '%s'\n", substr3);  // Expected: "world!"
        free(substr3);
    }
    else
    {
        printf("Test 3 - Memory allocation failed or invalid input\n");
    }

    // Test 4: Case where 'start' is 0 (beginning of string)
    char *substr4 = ft_substr(str1, 0, 5);
    if (substr4)
    {
        printf("Test 4 - Substring: '%s'\n", substr4);  // Expected: "Hello"
        free(substr4);
    }
    else
    {
        printf("Test 4 - Memory allocation failed or invalid input\n");
    }

    // Test 5: Case where 's' is NULL
    char *substr5 = ft_substr(NULL, 0, 5);
    if (substr5 == NULL)
    {
        printf("Test 5 - Substring: NULL (as expected)\n");  // Expected: NULL
    }

    return 0;
}

