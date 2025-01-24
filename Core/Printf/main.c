/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:07:58 by motaz             #+#    #+#             */
/*   Updated: 2025/01/22 20:36:16 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", printf("Hello World\n"));
	printf("%d\n", ft_printf("Hello World\n"));
	printf("%d\n", printf("Hello World %[]\n"));
	printf("%d\n", ft_printf("Hello World %[]\n"));
	printf("%d\n", printf("Hello World %m\n"));
	printf("%d\n", ft_printf("Hello World %m\n"));
	ft_printf("Test 1 : %c\n", 'A');
	ft_printf("Test 2 : %s\n", "Hello World");
	ft_printf("Test 3 : %d\n", 42);
	ft_printf("Test 3 : %d\n", -42);
	ft_printf("Test 4 : %u\n", 4294967295);
	ft_printf("Test 5 : %x , %X\n", 3055, 3055);
	ft_printf("Test 7 : %%\n");
}
