/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:30 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:09:03 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// u and ctrl r
// copies a string in a new location it allocates memory for the new string 
// first it calculates how much memory is required (string size + 1 for '/0')

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

/*char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}*/

char *ft_strdup(const char *str)
{
    char *copy;
    size_t len;
    size_t i;

    if(str == NULL)
        return NULL;
    len = 0;
    while(str[len] != '\0')
        len++;

    // memory allocation
    copy = (char *)malloc(len + 1);
    if(copy == NULL)
        return NULL;
    i = 0;
    while(str[i] != '\0')
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    return copy;
}
int    main(void)
{
    const char  *original = "Hello, World!";
    char        *duplicate;

    // Duplicate the string using the custom strdup implementation
    duplicate = ft_strdup(original);

    if (duplicate != NULL)
    {
        write(1, "Original: ", 10);
        write(1, original, 13);  // Print the original string
        write(1, "\n", 1);
        write(1, "Duplicate: ", 11);
        write(1, duplicate, 13);  // Print the duplicate string
        write(1, "\n", 1);

        // Free the allocated memory after use
        free(duplicate);
    }
    else
    {
        write(1, "Memory allocation failed.\n", 26);
    }

    return (0);  // Return 0 to indicate successful execution
}
