/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:22:06 by motaz             #+#    #+#             */
/*   Updated: 2024/12/30 15:46:52 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;

	if (count && size > 0x1000000000 / count)
		return (NULL);
	allocated_memory = malloc(count * size);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, count * size);
	return (allocated_memory);
}
