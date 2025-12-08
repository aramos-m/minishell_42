/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:32:00 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/24 17:42:37 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
* @file ft_putchar_fd.c
* @brief Writes char c into file descriptor fd
* 
* @param c: charater to write
* @param fd: file descriptor
* 
* @author sgarcia3
* @date 24/10/2023
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main(void)
{
	int	fd;
	char a;

	a = 'a';
	fd = '\0';
	ft_putchar_fd(a, fd);
	ft_putchar_fd('c', fd);
	ft_putchar_fd(126, fd);
	printf("%d\n", fd);
	return (0);
}*/
