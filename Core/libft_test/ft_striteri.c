/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:32 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:09:05 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  // For malloc

// Function to calculate the length of the string 's'
size_t ft_strlen(const char *s)
{
  size_t len = 0;
  while (s[len] != '\0')  // Loop until we reach the null-terminator
    len++;
  return len;
}

// Function to apply 'f' to each character of the string 's' along with its index
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
  unsigned int i;

  if (!s || !f)  // Check if the string or function is NULL
    return;  // If either is NULL, do nothing

  i = 0;
  while (s[i] != '\0')  // Loop through the string
  {
    f(i, &s[i]);  // Apply the function 'f' to the character and pass the index
    i++;  // Move to the next character
  }
}

#include <stdio.h>

// Example function to change a character to uppercase
void to_uppercase(unsigned int index, char *c)
{
  (void)index;  // We don't need to use 'index' here
  if (*c >= 'a' && *c <= 'z')  // If the character is lowercase
    *c = *c - 32;  // Convert it to uppercase
}

int main(void)
{
  char str[] = "hello world";

  ft_striteri(str, to_uppercase);  // Apply the function to each character

  printf("Modified string: %s\n", str);  // Print the modified string

  return 0;
}
