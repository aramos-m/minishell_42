/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:19:42 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/24 17:58:46 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_striteri.c
 * @brief: applies the function 'f' to each character of the string 's', 
 * giving the index of the current character as the first argument and the 
 * current character as the second argument.
 *
 * @param s: string to which the function 'f' will be applied
 * @param f: function to be applied
 *
 * @return: none
 *
 * @author: sgarcia3
 * @date: 24/10/2023
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}

/*void print_index_char(unsigned int i, char *str)
{
    printf(" %d, %c\n", i, *str);
}

int main()
{
    char *s = "Hola Sara";
    ft_striteri(s, print_index_char);
    return 0;
}*/
