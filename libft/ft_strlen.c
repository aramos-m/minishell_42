/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:05:58 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/15 20:54:48 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	return (i);
}

/*int	main(void)
{
	char *str = "Hola Sara!";
	printf("%d\n", ft_strlen(str));
	return (0);
}*/
