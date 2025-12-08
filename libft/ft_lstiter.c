/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:59:40 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 22:22:05 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstiter.c
 * @brief While lst is not NULL (last positition) is applied thf f function
 * to content. Then iterates to the next node in lst.
 *
 * @param lst: list to iterate and to whose content variable we will apply
 * the function f
 * @param f: function that is passed as a parameter
 *
 * @author sgarcia3
 * @date 24/10/2023
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	print_upper(void *n)
{
	if (*(char *)n >= 'a' && *(char *)n <= 'z')
		printf("%c\n", ft_toupper( *((char *)n)));
	else
		printf("%c\n", *((char *)n));
}

int main(void)
{
	t_list 	*lst = NULL;
	char	a = 'a';
	char	b = 'b';
	char	c = '0';

	t_list *node_a = ft_lstnew(&a);
	t_list *node_b = ft_lstnew(&b);
	t_list *node_c = ft_lstnew(&c);

	ft_lstadd_back(&lst, node_a);
	ft_lstadd_back(&lst, node_b);
	ft_lstadd_back(&lst, node_c);

	//t_list *current = lst;
	ft_lstiter(lst, print_upper);
	return (0);
}*/
