/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:16 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:50 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
#include <unistd.h>  // For the write system call

// Function to write a character 'c' to the file descriptor 'fd'
void ft_putchar_fd(char c, int fd)
{
  write(fd, &c, 1);  // Write 1 byte (the character) to the file descriptor
}
#include <stdio.h>

// Prototype of ft_putchar_fd
void ft_putchar_fd(char c, int fd);

int main(void)
{
  ft_putchar_fd('A', 1);  // Write 'A' to standard output (fd = 1)
  ft_putchar_fd('\n', 1);  // Write newline to standard output (fd = 1)
  return 0;
}

