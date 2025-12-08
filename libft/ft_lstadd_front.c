/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:58:51 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 21:03:38 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstadd_front.c
 * @brief Adds the node 'new' to the beginning of the list 'lst'.
 * 
 * 1. Assigns the value of the pointer *lst to the 'next' field of the 
 * new node (the new node now points to the first node of the existing list, 
 * lst)
 * 2. Changes the value of *lst to the new node (the list now starts with the 
 * new node)
 * 
 * @param lst: list to which the new node is added
 * @param new: node that will be added
 * 
 * @author sgarcia3
 * @date 19/10/2023
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*void print_list(t_list *lst) {
    t_list *current = lst;
    while (current != NULL) {
        printf("%p\n", current->content);
        current = current->next;
    }
}

int main() {
    t_list *lst = NULL; //la lista no tiene nodos, está vacía
    int a = 1;
    int b = 2;
    int c = 3;

    t_list *node_a = ft_lstnew(&a);
    t_list *node_b = ft_lstnew(&b);
    t_list *node_c = ft_lstnew(&c);

    ft_lstadd_front(&lst, node_a);
    ft_lstadd_front(&lst, node_b);
    ft_lstadd_front(&lst, node_c);

    print_list(lst);

    return 0;
}*/
