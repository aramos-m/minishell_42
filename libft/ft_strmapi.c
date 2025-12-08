/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:27:20 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/15 23:56:56 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_strmapi.c
 * @brief: applies the function 'f' to each character of the string 's', 
 * giving the index of the current character as the first argument and the 
 * current character as the second argument, and creates a new string with 
 * the results.
 *
 * @param s: string to which the function 'f' will be applied
 * @param f: function to be applied
 *
 * @return: a new string with the results of applying the function 'f' to 
 * each character of the string 's'. If 's' is NULL, it returns NULL.
 *
 * @author: sgarcia3
 * @date: 15/09/2023
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (!s)
		return (NULL);
	new = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new + i) = f(i, *(s + i));
		i++;
	}
	return (new);
}

/*char func(unsigned int i, char c)
{
	i = 32;
	if (c >= 'a' && c <= 'z')
		c -= i;
	return (c);
}

int main(void)
{
    char *s1 = "Hola, Sara!";
    char *s2;

    s2 = ft_strmapi(s1, func);
    printf("%s\n", s2);

    return 0;
}*/
