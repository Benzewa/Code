/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:59:09 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:06:47 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t Length = 0;
	while (s[Length] != 0)
		Length++;
	return (Length);
}
int main()
{
    printf("%zu\n",ft_strlen("Moutaz"));
}
