/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:59:29 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:07:09 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_toupper(int c) 
{
    if (c >= 'a' && c <= 'z') {
        return c - 32; // Convert lowercase to uppercase
    }
    return c;
}
