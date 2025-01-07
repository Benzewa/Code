/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:22:22 by motaz             #+#    #+#             */
/*   Updated: 2025/01/06 10:08:20 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numofdigits(int n)
{
	int	counter;

	counter = (n <= 0);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ret;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numofdigits(n);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	if (n == 0)
		ret[0] = '0';
	else if (n < 0)
	{
		ret[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		ret[--len] = '0' + (n % 10);
		n /= 10;
	}
	return (ret);
}
