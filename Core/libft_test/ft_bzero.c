/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:59:36 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:07:15 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
#include <stdio.h>

/*
** Custom implementation of the bzero function.
** This function sets a block of memory to zero, byte by byte.
** It is similar to memset, but specifically sets all bytes to zero.
*/

void    bzero(void *s, size_t len)
{
    unsigned char   *byte_ptr;
    size_t          i;

    // Step 1: Cast the void pointer to an unsigned char pointer.
    // We use unsigned char because bzero works on memory byte by byte.
    byte_ptr = (unsigned char *)s;

    // Step 2: Initialize the index to 0, which we will use to iterate through the memory.
    i = 0;

    // Step 3: Set each byte to 0. We do this byte by byte.
    while (i < len)
    {
        byte_ptr[i] = 0;  // Set the byte at index i to 0
        i++;  // Move to the next byte in memory
    }
}

int     main(void)
{
    char    arr[10];
    size_t  i;

    // Step 1: Use the custom bzero function to set all bytes of the array to 0.
    bzero(arr, sizeof(arr));

    // Step 2: Print the values of the array to verify that all bytes are set to 0.
    i = 0;
    while (i < 10)
    {
        printf("%d ", arr[i]);  // Print each byte in the array (they should all be 0)
        i++;  // Move to the next element in the array
    }
    printf("\n");

    return (0);  // Return 0 to indicate the program executed successfully
}
#include <stdio.h>

void    bzero(void *s, size_t len)
{
    unsigned char   *byte_ptr;
    size_t          i;

    byte_ptr = (unsigned char *)s;
    i = 0;
    while (i < len)
    {
        byte_ptr[i] = 0;
        i++;
    }
}

int     main(void)
{
    char    arr[10];
    size_t  i;

    bzero(arr, sizeof(arr));
    i = 0;
    while (i < 10)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    return (0);
}

