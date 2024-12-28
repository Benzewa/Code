#include <stdlib.h>

static size_t	ft_toklen(const char *str, char delimiter)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' && str[len] != delimiter)
	{
		len++;
	}
	return (len);
}

static void	free_result(char **result, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(const char *s, char delimiter)
{
	char	**result;
	size_t	token_count;
	size_t	index;
	const char	*temp;
	size_t	token_length;

	if (s == NULL)
		return (NULL);
	token_count = 0;
	temp = s;
	while (*temp != '\0')
	{
		while (*temp == delimiter && *temp != '\0')
			temp++;
		if (*temp != '\0')
		{
			token_count++;
			while (*temp != delimiter && *temp != '\0')
				temp++;
		}
	}
	result = malloc(sizeof(char *) * (token_count + 1));
	if (result == NULL)
		return (NULL);
	index = 0;
	temp = s;
	while (*temp != '\0')
	{
		while (*temp == delimiter && *temp != '\0')
			temp++;
		if (*temp != '\0')
		{
			token_length = ft_toklen(temp, delimiter);
			result[index] = malloc(sizeof(char) * (token_length + 1));
			if (result[index] == NULL)
			{
				free_result(result, index);
				return (NULL);
			}
			for (size_t i = 0; i < token_length; i++)
				result[index][i] = temp[i];
			result[index][token_length] = '\0';
			index++;
			temp += token_length;
		}
	}
	result[index] = NULL;
	return (result);
}
