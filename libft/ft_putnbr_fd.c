/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:22:02 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/24 17:58:08 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putnbr_fd.c
 * @brief: writes an integer to a specified file descriptor.
 *
 * @param n: integer to be printed
 * @param fd: file descriptor where the integer will be printed
 *
 * @return: none
 *
 * @author: sgarcia3
 * @date: 24/10/2023
 */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

/*#include <stdio.h>

int main(void)
{
    int number = 0;
    FILE *file_ptr;

    file_ptr = fopen("output.txt", "w");
    if (file_ptr == NULL)
    {
        printf("Error.\n");
        return 1;
    }
    ft_putnbr_fd(number, fileno(file_ptr));
    fclose(file_ptr);
    return 0;
}*/
