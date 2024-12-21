/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:59:11 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:06:49 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>  // For malloc

// Function to calculate the length of the string 's'
size_t ft_strlen(const char *s)
{
  size_t len = 0;
  while (s[len] != '\0')
    len++;
  return len;
}

// Function to create a new string by applying 'f' to each character in 's'
char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
  char *result;
  size_t i;
  size_t len;

  if (!s || !f)  // Check for NULL input
    return NULL;

  len = ft_strlen(s);  // Calculate the string length
  result = (char *)malloc(sizeof(char) * (len + 1));  // Allocate memory for the result
  if (!result)  // Check if malloc failed
    return NULL;

  i = 0;
  while (s[i])  // Loop through the string
  {
    result[i] = f(i, s[i]);  // Apply the function 'f' to each character
    i++;
  }
  result[i] = '\0';  // Null-terminate the string

  return result;
}
#include <stdio.h>

char to_upper(unsigned int index, char c)
{
  (void)index;  // We don't use the index in this example
  if (c >= 'a' && c <= 'z')
    return c - 32;  // Convert lowercase letters to uppercase
  return c;
}

int main(void)
{
  char *str = "hello world";
  char *result = ft_strmapi(str, to_upper);

  if (result)
  {
    printf("Original: %s\n", str);
    printf("Modified: %s\n", result);
    free(result);  // Free the allocated memory
  }
  else
  {
    printf("Memory allocation failed.\n");
  }

  return 0;
}
