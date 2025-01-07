/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:23:52 by motaz             #+#    #+#             */
/*   Updated: 2025/01/04 07:54:09 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*lastoccurance;
	char	ch;

	i = 0;
	ch = (char)c;
	lastoccurance = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			lastoccurance = (char *)&s[i];
		i++;
	}
	if (s[i] == ch)
		lastoccurance = (char *)&s[i];
	return (lastoccurance);
}
