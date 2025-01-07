/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:22:33 by motaz             #+#    #+#             */
/*   Updated: 2025/01/04 07:47:58 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*pointertodst;
	const unsigned char	*pointertosrc;
	size_t				i;

	if (!dst && !src)
		return (0);
	pointertodst = (unsigned char *)dst;
	pointertosrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		pointertodst[i] = pointertosrc[i];
		i++;
	}
	return (dst);
}
