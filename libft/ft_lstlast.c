/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:01:56 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 23:17:08 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstlast.c
 * @brief Returns the last node of the list
 *
 * Iterates over the list, but moves to the next element instead
 * of the current one (next). It stops iterating when next is NULL,
 * but returns a pointer to the last element.
 *
 * @param lst
 * @return pointer to the last node of the list
 *
 * @author sgarcia3
 * @date 23/10/2023
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main() {
    t_list *lst = NULL;
    char a = 'A';
    char b = 'B';
    char c = 'C';
	char d = 'D';

    t_list *node_a = ft_lstnew(&a);
    t_list *node_b = ft_lstnew(&b);
    t_list *node_c = ft_lstnew(&c);
	t_list *node_d = ft_lstnew(&d);

    ft_lstadd_front(&lst, node_a);
    ft_lstadd_front(&lst, node_b);
    ft_lstadd_front(&lst, node_c);
	ft_lstadd_front(&lst, node_d);

    t_list *last_node = ft_lstlast(lst);
    printf("%p\n", last_node);
    //se mostrará el valor del primer nodo porque ft_lstadd_front añade
    //nodos al principio de la lista, por lo que el primero en ser introducido
    //terminará siendo el primero.
    printf("%c\n", *(char *)last_node->content);

    return 0;
}*/
