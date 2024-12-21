/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:34 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:09:07 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

// Function to join two strings s1 and s2 into a new string.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;        // This will hold the joined string.
	size_t	len1;           // Length of the first string (s1).
	size_t	len2;           // Length of the second string (s2).
	size_t	i;              // Loop counter for copying characters.
	size_t	j;              // Loop counter for copying characters from s2.

	// Step 1: Check if either s1 or s2 is NULL.
	if (s1 == NULL || s2 == NULL)
		return (NULL);  // If either string is NULL, return NULL.

	// Step 2: Calculate the length of both strings.
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;  // Find the length of s1.

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;  // Find the length of s2.

	// Step 3: Allocate memory for the new string.
	result = (char *)malloc(len1 + len2 + 1);  // +1 for the null terminator.
	if (result == NULL)
		return (NULL);  // If memory allocation fails, return NULL.

	// Step 4: Copy s1 into the result string.
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];  // Copy each character from s1.
		i++;
	}

	// Step 5: Copy s2 into the result string after s1.
	j = 0;
	while (j < len2)
	{
		result[i + j] = s2[j];  // Copy each character from s2.
		j++;
	}

	// Step 6: Null-terminate the result string.
	result[i + j] = '\0';

	// Step 7: Return the joined string.
	return (result);
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Test 1: Join two simple strings
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char *result1 = ft_strjoin(str1, str2);
    
    if (result1)
    {
        printf("Test 1 - Joined String: '%s'\n", result1);  // Expected: "Hello, world!"
        free(result1);  // Don't forget to free the allocated memory!
    }
    else
    {
        printf("Test 1 - Memory allocation failed or invalid input\n");
    }

    // Test 2: One of the strings is NULL
    char *result2 = ft_strjoin(NULL, str2);
    if (result2 == NULL)
    {
        printf("Test 2 - Substring: NULL (as expected)\n");
    }

    // Test 3: Both strings are NULL
    char *result3 = ft_strjoin(NULL, NULL);
    if (result3 == NULL)
    {
        printf("Test 3 - Substring: NULL (as expected)\n");
    }

    return 0;
}

