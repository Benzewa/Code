/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:59:13 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:06:52 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		++s1;
		++s2;
		++i;
	}
	if (i == n)
	{
		--s1;
		--s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
