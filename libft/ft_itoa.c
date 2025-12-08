/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:49:00 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 20:53:18 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @note: auxiliary function
 *
 * @brief If the number is negative, it stores the character '-' in the first
 * position of the string. Returns 1 if the number is positive and -1 if
 * it is negative, to be used later in the modulus calculation.
 *
 * @param arg: pointer to argument for saving the minus sign if number is
 * negative
 * @param number: number to calculate sign 
 * @return sign: the sign of the number we want to convert to integer
 *
 * @author sgarcia3
 * @date 04/10/2023
 */

static int	signer(char *arg, int number)
{
	int	sign;

	sign = 1;
	if (number < 0)
	{
		arg[0] = '-';
		sign = -1;
	}
	return (sign);
}

/**
 * @note: auxiliary function
 *
 * @brief If the number is negative, it changes it to positive and increases
 * the string size by 1. It divides by 10 and increases the size
 * by 1 until zero is obtained in the division.
 *
 * @param number: variable to calculate size of the argument
 * @return the size of the array in which the number will be stored
 * as a string
 *
 * @author sgarcia3
 * @date 04/10/2023
 */

static int	sizer(int number)
{
	int	size;

	size = 0;
	if (number < 0)
	{
		number = -number;
		size++;
	}
	while (number > 0)
	{
		number /= 10;
		size++;
	}
	return (size);
}

/**
 * @note auxiliary function
 * @brief adds the null character at the end of the string, in case the
 * number is positive, this position will be size, if it is negative it will
 * be size + 1 because we have the '-' sign stored in the first position.
 * Each character is obtained by adding the modulus of the division by 10
 * + 48. We divide the number by 10 and keep decrementing size by 1 until
 * the operation results in 0 and size is also 0.
 *
 * @param arg: array where we will store each number as a char
 * @param number: integer to convert to string
 * @param size: magnitude of the number including the sign
 * @param sign: sign
 * @return number passed to characters
 *
 * @author sgarcia3
 * @date 29/10/2023
 */

char	*argument(char *arg, int number, int size, int sign)
{
	if (number >= 0)
	{
		*(arg + size) = '\0';
		while (size > 0)
		{
			*(arg + size - 1) = number % 10 + '0';
			number /= 10;
			size--;
		}
	}
	else if (number < 0)
	{
		*(arg + size) = '\0';
		while (size > 0)
		{
			*(arg + size) = (sign * number % 10) + '0';
			number /= 10;
			size--;
		}
	}
	return (arg);
}

/**
 * @note auxiliary function
 * @brief: function to transform the value -2147483648 to string 
 * because it would be out of range. This is a limit number and
 * we delete sign and transfomr to positive the function will 
 * have a umpredectible behavior 
 *
 * @param n: n will be always INT_MIN
 * @return: n transformed to char string or NULL if memory
 * reservation fails
 *
 * @author sgarcia3
 * @date 04/
 */

char	*excepts(int n)
{
	char	*arg;

	n = 12;
	arg = ft_calloc(sizeof(char), n);
	if (!arg)
		return (NULL);
	ft_memcpy(arg, "-2147483648", 12);
	return (arg);
}

/**
 * @file ft_itoa.c
 * @brief: Using malloc(3), generates a string that represents the integer
 * value received as an argument. Negative numbers must be managed.
 *
 * Once the checks for the cases treated as exceptions are made, if none of
 * these occur, we will calculate with sizer() the magnitude of the number
 * including the negative sign - if it is negative. The necessary memory
 * will be reserved, the sign will be calculated with signer() and finally
 * the string will be created with the argument() function.
 *
 * @exception -2147483648: value treated in a special way because when we
 * pass it to positive it goes out of the range of integers.
 * @exception 0: value treated in a special way to avoid an infinite loop
 * in the allocate() function that would occur when dividing by 10 in the
 * while loops.
 *
 * @param n: integer value to be transformed into argument.
 * @return the integer number passed to a string of characters
 *
 * @author sgarcia3
 * @date 04/10/2023
 */

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*arg;

	if (n == -2147483648)
		return (excepts(n));
	if (n == 0)
	{
		arg = ft_calloc(sizeof(char), 2);
		if (!arg)
			return (NULL);
		ft_memcpy(arg, "0", 2);
		return (arg);
	}
	size = sizer(n);
	arg = ft_calloc(sizeof(char), size + 1);
	if (!arg)
		return (NULL);
	sign = signer(arg, n);
	if (n < 0)
		size--;
	arg = argument(arg, n, size, sign);
	return (arg);
}

/*int main(void)
{
    int n = 0;
    char *a = ft_itoa(n);
    printf("%s\n", a);
    return (0);
}*/
