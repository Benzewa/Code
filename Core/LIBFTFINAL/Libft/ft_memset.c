/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:22:38 by motaz             #+#    #+#             */
/*   Updated: 2025/01/06 09:25:44 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	byte_value;
	size_t			index;

	ptr = (unsigned char *)b;
	byte_value = (unsigned char)c;
	index = 0;
	while (index < len)
	{
		ptr[index] = byte_value;
		index++;
	}
	return (b);
}
