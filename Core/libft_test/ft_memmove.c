/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:12 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:45 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//d G
#include <stddef.h>  // For size_t

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	if (dst == NULL || src == NULL)
		return (NULL);
	if (len == 0)
		return (dst);

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;

	// Case when memory does not overlap or is safe to copy forward
	if (source > destination || source + len <= destination)
	{
		i = 0;
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
	{
		// Case when memory overlaps, copy from the end
		while (len > 0)
		{
			destination[len - 1] = source[len - 1];
			len--;
		}
	}

	return (dst);
}
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, World!";

	// Before memmove
	printf("Before memmove: %s\n", str);

	// Move "Hello, " (6 bytes) to position 7 in the same string
	ft_memmove(str + 7, str, 6);

	// After memmove
	printf("After memmove: %s\n", str);

	return (0);
}
