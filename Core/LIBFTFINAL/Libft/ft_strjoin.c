/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:23:16 by motaz             #+#    #+#             */
/*   Updated: 2025/01/04 07:53:17 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*retstr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	retstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!retstr)
		return (NULL);
	while (s1[i])
	{
		retstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		retstr[i] = s2[j];
		i++;
		j++;
	}
	retstr[i] = '\0';
	return (retstr);
}
