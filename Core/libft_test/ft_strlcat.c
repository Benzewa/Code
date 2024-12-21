/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:36 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:09:10 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include "libft.h"
#include <stdio.h>

/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	if (i == dstsize)
	{
		while (src[j] != '\0')
			j++;
		return (i + j);
	}
	while (src[j] != '\0' && (i + j) < (dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	return (i + j);
}
*/
size_t ft_strlcat(char *dst, const char *src, size_t size) {
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i = 0;

    if (size <= dst_len) return size + src_len;
    while (dst_len + i < size - 1 && src[i] != '\0') {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return dst_len + src_len;
}
int	main(void)
{
	char	dst[20] = "Hello, ";
	const char	*src = "world!";

	size_t	result = ft_strlcat(dst, src, sizeof(dst));

	printf("Resulting string: '%s'\n", dst);
	printf("Total length: %zu\n", result);
	return (0);
}
