/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:14 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:48 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{

}
#include <stdio.h>

/*
** Custom implementation of the memset function.
** This function sets a block of memory (an array or structure) to a specific byte value.
** It fills the memory with the specified value byte by byte until the specified number of bytes are filled.
*/

void    *my_memset(void *ptr, int value, size_t num)
{
    unsigned char   *byte_ptr;   // Pointer to traverse the memory block
    size_t          i;           // Index variable to keep track of the number of bytes set

    // Step 1: Convert the void pointer (generic pointer) to an unsigned char pointer.
    // Why? Because memset operates on bytes (1 byte), and unsigned char is 1 byte in size.
    byte_ptr = (unsigned char *)ptr;

    // Step 2: Initialize the index to 0. This index will be used to fill the memory byte by byte.
    i = 0;

    // Step 3: Start filling memory byte by byte.
    // The while loop runs num times, which is the number of bytes we want to set.
    // In each iteration, it sets one byte of memory to the given value.
    while (i < num)
    {
        byte_ptr[i] = (unsigned char)value;  // Set the byte at index i to the given value
        i++;  // Move to the next byte in memory
    }

    // Step 4: After filling the memory, return the original pointer.
    // This is useful because, in standard memset, it returns the pointer to allow chaining function calls.
    return (ptr);
}

int     main(void)
{
    char    arr[10];  // Declare an array of 10 characters, initially uninitialized
    size_t  i;         // Index to loop through and print each element of the array

    // Step 1: Use the custom my_memset function to fill the array with the value 5.
    // This will set all 10 bytes of the array 'arr' to 5.
    my_memset(arr, 5, sizeof(arr));

    // Step 2: Print the values of the array to verify that all elements are set to 5.
    i = 0;  // Initialize index to 0 to start printing from the first element
    while (i < 10)  // Loop through each element of the array
    {
        printf("%d ", arr[i]);  // Print the value of each element in the array
        i++;  // Move to the next element in the array
    }
    printf("\n");  // Print a newline after the array values for better formatting

    return (0);  // Return 0 to indicate the program executed successfully
}



#include <stdio.h>

void    *my_memset(void *ptr, int value, size_t num)
{
    unsigned char   *byte_ptr;
    size_t          i;

    byte_ptr = (unsigned char *)ptr;
    i = 0;
    while (i < num)
    {
        byte_ptr[i] = (unsigned char)value;
        i++;
    }
    return (ptr);
}

int     main(void)
{
    char    arr[10];
    size_t  i;

    my_memset(arr, 5, sizeof(arr));
    i = 0;
    while (i < 10)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    return (0);
}

