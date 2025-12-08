/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:24:29 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 19:04:03 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @file ft_isalnum.c
 * @brief: if c is alphabetic or numeric returns 1 else returns 0
 *
 * @param c: number to check
 *
 * @author sgarcia3
 * @date 22/09/2023
 */

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
    printf("%ld\n", ft_isalnum('a'));
    return (0);
}*/
