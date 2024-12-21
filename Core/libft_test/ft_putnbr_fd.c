/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:20 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:54 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <unistd.h>  // For the write function

// Function to write an integer 'n' to the file descriptor 'fd'
void ft_putnbr_fd(int n, int fd)
{
  if (n == 0)  // Special case: if the number is zero
  {
    write(fd, "0", 1);  // Print '0'
    return;
  }

  if (n < 0)  // If the number is negative
  {
    write(fd, "-", 1);  // Write the minus sign
    n = -n;  // Work with the positive value of n
  }

  // Create a string to hold digits
  char str[10];  // Array to hold digits (we need at most 10 digits)
  int i = 0;  // Index for the array

  // Extract digits of the number
  while (n > 0)
  {
    str[i] = "0123456789"[n % 10];  // Get the last digit
    n = n / 10;  // Remove the last digit
    i++;  // Move to the next position in the array
  }

  // Print digits in reverse order
  while (i > 0)
  {
    write(fd, &str[i - 1], 1);  // Print the last stored digit
    i--;  // Move to the previous digit
  }
}
#include <stdio.h>

// Prototype of ft_putnbr_fd
void ft_putnbr_fd(int n, int fd);

int main(void)
{
  ft_putnbr_fd(42, 1);  // Print 42 to standard output (fd = 1)
  write(1, "\n", 1);    // New line for readability

  ft_putnbr_fd(-42, 1); // Print -42 to standard output (fd = 1)
  write(1, "\n", 1);    // New line for readability

  ft_putnbr_fd(0, 1);   // Print 0 to standard output (fd = 1)
  write(1, "\n", 1);    // New line for readability

  ft_putnbr_fd(1234567890, 1); // Print a large number
  write(1, "\n", 1);    // New line for readability

  return 0;
}
