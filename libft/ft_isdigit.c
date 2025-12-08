/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrido.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:14:37 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 19:14:08 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @file ft_isdigit.c
 * @brief If the c value is a numeric character the function returns 1
 * else returns 0
 *
 * @param c: value to check
 * @return check
 *
 * @author sgarcia3
 * @date 22/09/2023
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%ld\n", ft_isdigit('7'));
	return (0);
}*/
