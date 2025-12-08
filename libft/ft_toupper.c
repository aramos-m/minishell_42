/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:33:48 by sgarcia3           #+#    #+#            */
/*   Updated: 2023/09/22 23:59:55 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_toupper.c
 * @brief: converts a character to uppercase if it is a lowercase letter.
 *
 * @param c: character to be converted
 *
 * @return: the character in uppercase if it was a lowercase letter, or the 
 * original character if it was not
 *
 * @author: sgarcia3
 * @date: 22/09/2023
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int main(void)
{
    char c;

    c = 125;
    printf("%c\n", ft_toupper(c));
    printf("%c\n", toupper(c));
    return (0);
}*/
