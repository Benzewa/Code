/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motaz < mosami@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:59:05 by motaz             #+#    #+#             */
/*   Updated: 2024/12/20 18:09:33 by motaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>  // For INT_MIN and INT_MAX

#define MAX_INT INT_MAX
#define MIN_INT INT_MIN

// Function to convert a string to an integer following atoi behavior
int my_atoi(const char *str)
{
    int result = 0;  // Final result
    int sign = 1;    // Sign of the number (+1 or -1)
    int i = 0;       // Index for iterating through the string
    int digit_found = 0;  // Flag to check if any digits were found

    // Step 1: Skip leading whitespaces
    while (str[i] == ' ' || str[i] == '\t')
        i++;

    // Step 2: Handle optional sign (+ or -)
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }

    // Step 3: Convert digits to an integer
    while (str[i] >= '0' && str[i] <= '9')
    {
        digit_found = 1;
        // Check for overflow or underflow
        if (result > (MAX_INT - (str[i] - '0')) / 10)
        {
            return (sign == 1) ? MAX_INT : MIN_INT;
        }
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // If no digits were found, return 0
    if (!digit_found)
        return 0;

    // Step 4: Apply the sign
    result *= sign;

    // Step 5: Return the result
    return result;
}

// Main function to test the my_atoi function
int main(void)
{
    // Test cases
    printf("Result 1: %d\n", my_atoi("42"));              // Expected: 42
    printf("Result 2: %d\n", my_atoi("   -42"));          // Expected: -42
    printf("Result 3: %d\n", my_atoi("4193 with words")); // Expected: 4193
    printf("Result 4: %d\n", my_atoi("words and 987"));   // Expected: 0
    printf("Result 5: %d\n", my_atoi("+123"));            // Expected: 123
    printf("Result 6: %d\n", my_atoi("   +9876"));        // Expected: 9876
    printf("Result 7: %d\n", my_atoi("12345678901234567890"));  // Expected: INT_MAX (overflow)
    printf("Result 8: %d\n", my_atoi("-12345678901234567890")); // Expected: INT_MIN (underflow)
    printf("Result 9: %d\n", my_atoi("abc"));             // Expected: 0 (no digits)
    printf("Result 10: %d\n", my_atoi("   "));            // Expected: 0 (empty string after whitespaces)

    return 0;
}

