/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:18 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:52 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <unistd.h>  // For the write system call

// Function to write a string 's' followed by a newline to the file descriptor 'fd'
void ft_putendl_fd(char *s, int fd)
{
  if (s == NULL)  // Check if the string is NULL
    return;  // If it's NULL, do nothing

  while (*s)  // Loop through the string until we reach the null-terminator
  {
    write(fd, s, 1);  // Write the current character to the file descriptor
    s++;  // Move to the next character in the string
  }

  write(fd, "\n", 1);  // Write the newline character to the file descriptor
}

