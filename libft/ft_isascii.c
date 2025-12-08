/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:18:14 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 19:12:14 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @file ft_isascii.c
 * @brief If the c value is part of ASCII standard ft_isascii returns 1
 * else returns 0
 *
 * @param c: value to check
 * @return check
 *
 * @author sgarcia3
 * @date 22/09/2023
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isascii(128));
	return (0);
}*/
