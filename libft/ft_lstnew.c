/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <sgarcia3@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:23:49 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/10/24 17:44:07 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstnew.c
 * @brief Creates a new node using malloc(3). The member variable
 * 'content' is initialized with the content of parameter 'content'. The
 * 'next' variable, with NULL.
 *
 * Creates a new node for a linked list.
 * new: pointer to a t_list structure that will point to the new node being
 * created.
 * new->content = content: we assign the content's value to the content's field
 * of the struct.
 * next->next = NULL: the new node is not connected to anything yet.
 *
 * @param content: the content which it created the new node
 * @return new node
 *
 * @author sgarcia3
 * @date 19/10/2023
 *
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*void print_node(t_list *node) {
    int *content = (int *)node->content;
    printf("%d\n", *content);
}

int main() {
    int a = 1;

    t_list *node_a = ft_lstnew(&a);

    if (node_a == NULL)
        return 1;

    print_node(node_a);

    return (0);
}*/
