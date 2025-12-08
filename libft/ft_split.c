/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:26:21 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/27 17:43:35 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	*free_data(char **spl)
{
	char	**tmp;

	tmp = spl;
	if (!spl)
		return (NULL);
	while (*spl)
	{
		free(*spl);
		spl++;
	}
	free(tmp);
	return (NULL);
}

static int	count(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count + 1);
}

static char	*fill(char const *s, int count)
{
	char	*str;

	str = ft_substr(s - count, 0, count);
	if (!str)
		return (NULL);
	return (str);
}

static char	**allocate(char const *s, char c, char **spl)
{
	size_t	len;
	int		count;
	int		i;
	char	*str;

	i = 0;
	count = 0;
	len = ft_strlen(s) + 1;
	while (len > 0)
	{
		if (*s != c && *s != '\0')
			count++;
		else if (count != 0 && (*s == c || *s == '\0'))
		{
			str = fill(s, count);
			if (!str)
				return (free_data(spl));
			spl[i++] = str;
			count = 0;
		}
		s++;
		len--;
	}
	spl[i] = NULL;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	int		words;

	words = count(s, c);
	spl = (char **)ft_calloc(sizeof(char *), words);
	if (!spl)
	{
		free(spl);
		return (NULL);
	}
	spl = allocate (s, c, spl);
	if (!spl)
		return (NULL);
	return (spl);
}

/*int main(void)
{
	char *str = "Hola/Sara/como/estas/!";
	char c = '/';
	char **spl = ft_split(str, c);
	int i = 0;

	while (spl[i] != NULL) 
	{
	printf("%p - %s\n",spl[i], spl[i]);
 		free(spl[i]);
         i++;
     }
     printf("%s\n", spl[i]);
 	free(spl);
    return (0);
}*/
