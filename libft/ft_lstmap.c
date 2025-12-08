/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia3 <sgarcia3@student.@42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:39:19 by sgarcia3          #+#    #+#             */
/*   Updated: 2023/11/04 23:46:48 by sgarcia3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @file ft_lstmap.c
 * @brief Iterates over the list 'lst' and applies the function 'f' to the 
 * content of each node. Creates a resulting list from the correct and 
 * successive application of the function 'f' to each node. The 'del' 
 * function is used to delete the content of a node, if necessary.
 *
 * The list to be returned is created and initialized with NULL. It iterates 
 * over lst, saving each newly created and initialized node with content from 
 * lst modified by the function f. If there is an error in creating aux, the 
 * function ft_lstclear is used with del and NULL is returned, if not, the 
 * new node is added and the next one from lst is passed.
 *
 * @param lst list to which f will be applied
 * @param f function that will be applied to lst
 * @param del function that will delete the content of the node, if necessary
 * @return the new list or NULL if node creation fails
 *
 * @author sgarcia3
 * @date 24/10/2023
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*aux;
	void		*content;

	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		aux = ft_lstnew(content);
		if (!aux)
		{
			(*del)(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}

/*void    *upper(void *content)
{
    char *str;

    str = malloc(sizeof(char) * 2);
    if (!str)
        return (NULL);
    str[0] = ft_toupper(*((char *)content));
    str[1] = '\0';
    return (str);
}

void    free_content(void *content)
{
    free(content);
}

int main(void)
{
	t_list *lst = NULL;
	char a = 'a'; 
	char b = 'b';
	char c = 'c';

	t_list *node_a = ft_lstnew(&a);
	t_list *node_b = ft_lstnew(&b);
	t_list *node_c = ft_lstnew(&c);

	ft_lstadd_back(&lst, node_a);
	ft_lstadd_back(&lst, node_b);
	ft_lstadd_back(&lst, node_c);

	t_list *new_lst = ft_lstmap(lst, upper, free_content);
	while (new_lst)
	{
		printf("%s\n", new_lst->content);
		new_lst = new_lst->next;
	}
	return (0);
}*/
