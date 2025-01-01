/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:22:36 by motaz             #+#    #+#             */
/*   Updated: 2024/12/31 09:23:42 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memmove_copy_backward(unsigned char *dst, unsigned char *src,
		size_t len)
{
	while (len > 0)
	{
		dst[len - 1] = src[len - 1];
		len--;
	}
}

static void	memmove_copy_forward(unsigned char *dst, unsigned char *src,
		size_t len)
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
	unsigned char	*dst2;
	unsigned char	*src2;

	if (len == 0 || dst == src)
		return (dst);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (src2 < dst2)
		memmove_copy_backward(dst2, src2, len);
	else
		memmove_copy_forward(dst2, src2, len);
	return (dst);
}
