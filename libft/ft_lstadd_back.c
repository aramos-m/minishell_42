/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:40:16 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 20:57:16 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstadd_back.c
 * @brief Adds the node 'new' to the end of the list 'lst'.
 * 
 * If lst is not NULL, it goes to the last element of the list and creates a
 * node in which it adds new. If the list is NULL, it creates the first node and
 * adds new.
 * 
 * @param lst: the list to which the new node will be added.
 * @param new: new node to be added.
 * 
 * @author Sara García Serrano
 * @date 23/10/2023
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/*int main() {
    t_list *lst = NULL;
    int a = 1;
    int b = 2;
    int c = 3;

    t_list *node_a = ft_lstnew(&a);
    t_list *node_b = ft_lstnew(&b);
    t_list *node_c = ft_lstnew(&c);

    ft_lstadd_back(&lst, node_a);
    ft_lstadd_back(&lst, node_b);
    ft_lstadd_back(&lst, node_c);

    t_list *current = lst;
    while (current) {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    return 0;
}*/
