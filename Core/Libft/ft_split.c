#include <stdlib.h>

// Helper function to count the number of substrings
static size_t ft_toklen(const char *s, char delimiter)
{
	size_t word_count = 0;
	int in_word = 0; // A flag to check if we are inside a word.

	while (*s)
	{
		if (*s != delimiter)
		{
			if (!in_word) // We encountered the start of a new word.
			{
				in_word = 1;
				word_count++;
			}
		}
		else
		{
			in_word = 0; // We are outside a word now.
		}
		s++;
	}
	return word_count;
}

// Helper function to create a substring
char *ft_substr(const char *s, size_t start, size_t len)
{
	char *substr = malloc(len + 1);
	if (!substr)
		return NULL;
	for (size_t i = 0; i < len; ++i)
		substr[i] = s[start + i];
	substr[len] = '\0';
	return substr;
}

// Main split function
char **ft_split(const char *s, char delimiter)
{
	if (!s)
		return NULL;

	size_t num_words = ft_toklen(s, delimiter);				  // Number of substrings
	char **result = malloc((num_words + 1) * sizeof(char *)); // Array for the substrings

	if (!result)
		return NULL;

	size_t i = 0;
	size_t start = 0;
	size_t len = 0;

	while (s[i] != '\0')
	{
		if (s[i] != delimiter)
		{
			if (len == 0)
				start = i; // Mark the start of a new word

			len++; // Increment the length of the current word
		}
		else if (len > 0)
		{
			// We've reached the end of a word, so allocate and store the substring
			result[i++] = ft_substr(s, start, len);
			len = 0; // Reset the length for the next word
		}
		i++;
	}

	// Handle the last word if there was no delimiter at the end
	if (len > 0)
		result[i++] = ft_substr(s, start, len);

	result[i] = NULL; // Null-terminate the array of strings
	return result;
}
