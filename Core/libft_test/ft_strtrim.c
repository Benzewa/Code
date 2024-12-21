/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:59:19 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:06:59 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include "libft.h"

#include <stdlib.h>  // For malloc

// Function to check if a character is in the set
static int	contains_char(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

// Function to trim characters from the start and end of s1 based on set
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	i;

	// Handle possible NULL inputs
	if (s1 == NULL || set == NULL)
		return (NULL);

	// Step 1: Find the first non-set character from the start
	start = 0;
	while (s1[start] != '\0' && contains_char(s1[start], set))
		start++;

	// Step 2: Find the last non-set character from the end
	end = 0;
	while (s1[end] != '\0')
		end++;  // Find the length of the string
	end--;  // Move the index to the last character

	// Step 3: Trim trailing set characters
	while (end > start && contains_char(s1[end], set))
		end--;

	// Step 4: If the string is entirely made of 'set' characters
	if (start > end)
	{
		result = (char *)malloc(1);  // Allocate memory for empty string
		if (result == NULL)  // Check for memory allocation failure
			return (NULL);
		result[0] = '\0';  // Empty string
		return (result);
	}

	// Step 5: Allocate memory for the trimmed string
	result = (char *)malloc(end - start + 2);  // +1 for null terminator, +1 for range
	if (result == NULL)  // Check for memory allocation failure
		return (NULL);

	// Step 6: Copy the trimmed content into the result string
	i = 0;
	while (start <= end)
		result[i++] = s1[start++];

	// Step 7: Null-terminate the string
	result[i] = '\0';

	// Step 8: Return the trimmed string
	return (result);
}

