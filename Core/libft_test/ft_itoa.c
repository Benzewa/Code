/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:01 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:33 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>  // For malloc

// Helper function to count the number of digits in the integer
static size_t count_digits(int n)
{
  size_t count = 0;
  if (n <= 0)
    count++;  // For the sign or zero
  while (n != 0)
  {
    n /= 10;
    count++;
  }
  return count;
}

// Function to convert integer to string
char *ft_itoa(int n)
{
  char *str;
  size_t len;
  int is_negative;

  // Handle special case for 0
  if (n == 0)
    return "0";

  is_negative = (n < 0) ? 1 : 0;
  len = count_digits(n);

  // Allocate memory for the string (plus 1 for the null-terminator)
  str = (char *)malloc(len + 1);
  if (!str)
    return NULL;

  str[len] = '\0';  // Null-terminate the string

  if (is_negative)
    n = -n;  // Make the number positive for easier handling

  while (n > 0)
  {
    str[--len] = (n % 10) + '0';  // Get the last digit and convert to char
    n /= 10;  // Remove the last digit
  }

  if (is_negative)
    str[0] = '-';  // Add negative sign if needed

  return str;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int number = -12345;
  char *result = ft_itoa(number);
  
  if (result)
  {
    printf("Converted number: %s\n", result);
    free(result);  // Don't forget to free the allocated memory
  }
  else
  {
    printf("Memory allocation failed.\n");
  }

  return 0;
}

