/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:13:51 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 19:08:04 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @file ft_isalpha.c
 * @brief If c is lowercase or uppercase this function returns 1 else
 * returns 0
 *
 * @param c: value to check
 *
 * @author sgarcia3
 * @date 22/09/2023
 */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isalpha('&'));
	return (0);
}*/
