/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:22:36 by motaz             #+#    #+#             */
/*   Updated: 2025/01/06 10:08:39 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_backward(unsigned char *dst, unsigned char *src, size_t len)
{
	while (len > 0)
	{
		dst[len - 1] = src[len - 1];
		len--;
	}
}

static void	copy_forward(unsigned char *dst, unsigned char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstptr;
	unsigned char	*srcptr;

	if (len == 0 || dst == src)
		return (dst);
	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	if (dstptr > srcptr)
		copy_backward(dstptr, srcptr, len);
	else
		copy_forward(dstptr, srcptr, len);
	return (dst);
}
