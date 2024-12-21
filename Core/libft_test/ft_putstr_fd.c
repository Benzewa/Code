/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:22 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:56 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <unistd.h>  // For the write system call

// Function to write a string 's' to the file descriptor 'fd'
void ft_putstr_fd(char *s, int fd)
{
  if (s == NULL)  // Check if the string is NULL
    return;  // If it's NULL, do nothing

  while (*s)  // Loop through the string until we reach the null-terminator
  {
    write(fd, s, 1);  // Write one character to the file descriptor
    s++;  // Move to the next character in the string
  }
}
#include <stdio.h>

int main(void)
{
  ft_putstr_fd("Hello, world!\n", 1);  // Write "Hello, world!" to standard output (fd = 1)
  return 0;
}
