/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:38:49 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 21:08:02 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstdelone.c
 * @brief Takes as a parameter a 'lst' node and frees the memory of the 
 * contentusing the 'del' function given as a parameter, in addition to
 * freeing the node. The memory of 'next' should not be freed.
 * 
 * If lst is not empty, it deletes the content field with the given 'del'
 * function, then proceeds to free the memory of the deleted node.
 * 
 * @param lst node to be freed
 * @param del pointer to the function used to delete the content
 * 
 * @author sgarcia3
 * @date 24/10/2023
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

/*void del(void *content) {
    free(content);
}

int main() {
    t_list *lst = NULL;
    int *a = malloc(sizeof(int));
    *a = 1;

    t_list *node_a = ft_lstnew(a);

    ft_lstadd_back(&lst, node_a);

    printf("Antes de eliminar: %d\n", *(int *)lst->content);
    ft_lstdelone(lst, del);
    printf("Después de eliminar: %p\n", lst->content);

    return 0;
}*/
