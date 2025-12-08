/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:02:49 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/01 20:48:47 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstsize
 * @brief Counts the number of nodes in a list
 *
 * Iterates over the elements of the list and adds 1 in each loop,
 * updates list with the next node (next) until reaching the last
 * element, which will be NULL.
 *
 * @param lst list whose number of nodes we want to count
 * @returns the size of the list.
 *
 * @author sgarcia3
 * @date 23/10/2023
 *
 */

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*int main() {
    t_list *lst = NULL;
    int a = 1;
    int b = 2;
    int c = 3;

    t_list *node_a = ft_lstnew(&a);
    t_list *node_b = ft_lstnew(&b);
    t_list *node_c = ft_lstnew(&c);

    ft_lstadd_front(&lst, node_a);
    ft_lstadd_front(&lst, node_b);
    ft_lstadd_front(&lst, node_c);

    printf("size: %d\n", ft_lstsize(lst));

    return 0;
}*/
