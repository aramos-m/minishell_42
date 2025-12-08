/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:26:43 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 19:51:25 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @file ft_isprint.c
 * @brief If the c value is pritable ft_isprint returns 1
 * else returns 0
 *
 * @param c: value to check
 * @return check
 *
 * @author sgarcia3
 * @date 22/09/2023
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isprint('	'));
	return (0);
}*/
