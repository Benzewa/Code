/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:22:06 by motaz             #+#    #+#             */
/*   Updated: 2025/01/02 21:59:07 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;
	size_t	totsize;

	totsize = count * size;
	if (count && size > 0x1000000000 / count)
		return (NULL);
	allocated_memory = malloc(totsize);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, totsize);
	return (allocated_memory);
}
