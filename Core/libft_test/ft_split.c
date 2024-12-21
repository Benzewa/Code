/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:24 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:59 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>  // For malloc

// Helper function to count the number of substrings
static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		// Skip over delimiters and count words
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			// Skip the characters of the current word
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

// Helper function to allocate and copy a substring
static char	*copy_word(const char *s, size_t start, size_t end)
{
	size_t	i;
	char	*word;

	word = (char *)malloc(end - start + 1);
	if (word == NULL)
		return (NULL);  // Handle memory allocation failure
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

// Function to split string 's' into an array of substrings based on delimiter 'c'
char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	start;
	size_t	end;
	size_t	i;

	if (s == NULL)
		return (NULL);  // Handle NULL input string

	// Step 1: Count the number of words
	word_count = count_words(s, c);

	// Step 2: Allocate memory for the result array (array of pointers)
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);  // Handle memory allocation failure

	// Step 3: Fill the result array with substrings
	i = 0;
	start = 0;
	while (i < word_count)
	{
		// Skip the delimiters and find the start of the next word
		while (s[start] == c)
			start++;
		end = start;
		// Find the end of the word
		while (s[end] != c && s[end] != '\0')
			end++;
		// Copy the word into the result array
		result[i] = copy_word(s, start, end);
		if (result[i] == NULL)
		{
			// Free any previously allocated memory on error
			while (i > 0)
				free(result[--i]);
			free(result);
			return (NULL);
		}
		// Move to the next word
		start = end;
		i++;
	}

	// Step 4: Null-terminate the array of substrings
	result[i] = NULL;
	return (result);
}
/////////////

#include <stdlib.h>  // For malloc

// Helper function to count the number of words
static size_t count_words(const char *s, char c)
{
  size_t count = 0;
  size_t i = 0;

  while (s[i])
  {
    while (s[i] == c)  // Skip delimiters
      i++;
    if (s[i] != '\0')
    {
      count++;
      while (s[i] && s[i] != c)  // Skip the current word
        i++;
    }
  }
  return count;
}

// Helper function to copy a word into a new string
static char *copy_word(const char *s, size_t start, size_t end)
{
  size_t i = 0;
  char *word = (char *)malloc(end - start + 1);
  if (!word)  // If malloc fails, return NULL
    return NULL;
  while (start < end)
    word[i++] = s[start++];
  word[i] = '\0';  // Null-terminate the string
  return word;
}

// Function to split string 's' into words using delimiter 'c'
char **ft_split(const char *s, char c)
{
  char **result;
  size_t word_count, start, end, i;

  if (!s)  // Handle NULL input string
    return NULL;

  word_count = count_words(s, c);  // Count number of words to split
  result = (char **)malloc((word_count + 1) * sizeof(char *));
  if (!result)  // If malloc fails, return NULL
    return NULL;

  i = 0;
  start = 0;
  while (i < word_count)
  {
    while (s[start] == c)  // Skip delimiters
      start++;
    end = start;
    while (s[end] && s[end] != c)  // Find the end of the current word
      end++;
    result[i] = copy_word(s, start, end);  // Copy the word
    if (!result[i])  // If malloc fails, free previously allocated memory
    {
      while (i > 0)
        free(result[--i]);
      free(result);
      return NULL;
    }
    start = end;  // Move to the next word
    i++;
  }
  result[i] = NULL;  // Null-terminate the array of words
  return result;
}


