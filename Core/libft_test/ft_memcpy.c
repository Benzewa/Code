/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:10 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:08:43 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (ret);
}
#include <stdio.h>

void    *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *d;
    unsigned char   *s;
    size_t          i;

    if (!dest || !src)  // Check for NULL pointers to avoid segmentation faults
        return (NULL);  // Return NULL if either pointer is NULL

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;

    while (i < n)
    {
        d[i] = s[i];  // Copy each byte from source to destination
        i++;
    }
    return (dest);  // Return the destination pointer as required by memcpy
}

int     main(void)
{
    char    src[] = "Hello, World!";
    char    dest[20];
    size_t  i;

    if (sizeof(src) <= sizeof(dest))  // Ensure destination is large enough
    {
        memcpy(dest, src, 13);  // Copy 13 bytes (not more than the size of the string)
        i = 0;
        while (i < 13)
        {
            printf("%c", dest[i]);  // Print copied characters
            i++;
        }
        printf("\n");
    }
    else
    {
        printf("Destination buffer is too small!\n");
    }

    return (0);
}
