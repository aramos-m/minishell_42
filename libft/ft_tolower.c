/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 01:05:23 by sgarcia3           #+#    #+#            */
/*   Updated: 2023/09/23 00:00:51 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

/**
 * @file ft_tolower.c
 * @brief: converts a character to lowercase if it is an uppercase letter.
 *
 * @param c: character to be converted
 *
 * @return: the character in lowercase if it was an uppercase letter, or
 * the original character if it was not
 *
 * @author: sgarcia3
 * @date: 23/09/2023
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int main(void)
{
    char c;

    c = 97;
    printf("%c\n", ft_toupper(c));
    printf("%c\n", toupper(c));
    return (0);
}*/
