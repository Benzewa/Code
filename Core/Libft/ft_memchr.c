/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:22:25 by motaz             #+#    #+#             */
/*   Updated: 2024/12/30 12:19:32 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	f;

	ptr = (unsigned char *)s;
	f = (unsigned char)c;
	while (n--)
	{
		if (*ptr == f)
			return ((void *)ptr);
		++ptr;
	}
	return (NULL);
}
