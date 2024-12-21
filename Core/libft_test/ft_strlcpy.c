/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:38 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:09:12 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>  // for size_t

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (0);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>

int	main(void)
{
	char	dst[20];
	const char	*src = "Hello, world!";

	size_t	result = ft_strlcpy(dst, src, sizeof(dst));

	printf("Copied string: '%s'\n", dst);
	printf("Total length of src: %zu\n", result);
	return (0);
}
