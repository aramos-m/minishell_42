/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 01:58:29 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 20:56:14 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstclear.c
 * @brief Deletes and frees the given 'lst' node and all successive nodes
 * from that node, using the 'del' function and free(3).
 * In the end, the pointer to the list should be NULL.
 *
 * It stores the next node in a temporary t_list, then deletes the node
 * with the ft_lstdelone function and using the given 'del' function, and 
 finally, assigns the next node to lst. It iterates until the end of lst.
 *
 * @param lst pointer to the node of the list from which all nodes will be 
 * deleted.
 * @param del: function that deletes nodes and that will be passed in the 
 declaration.
 * 
 * @author sgarcia3
 * @date 24/10/2023
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
