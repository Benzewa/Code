/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz <mosami@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:07:55 by motaz             #+#    #+#             */
/*   Updated: 2025/01/22 10:07:56 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_putnbr(long nb);
int	ft_putnbr_hexa(unsigned long nbr, char up);
int	ft_putptr(void *ptr);
int	ft_putstr(char *str);

#endif
