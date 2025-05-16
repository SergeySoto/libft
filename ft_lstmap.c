/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoto-su <ssoto-su@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:58:13 by ssoto-su          #+#    #+#             */
/*   Updated: 2025/05/16 20:46:35 by ssoto-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*inicio_new_list;
	t_list	*temp;

	if (!lst || !f || !del)
		return NULL;
	while(lst)
	{
		if(!inicio_new_list)
		{
			temp = ft_lstnew(f(temp->content));
			/* si falla, eliminamos todo y devolvemos NULL */
		}
		else {
			// crear un nodo
			// añadirlo al final
			/* si falla, eliminamos todo y devolvemos NULL */

		}

		// crear el nodo
		// con ft_lstadd_back se añade al final o como primer nodo de la lista
		/* si falla, eliminamos todo y devolvemos NULL */




		// if (!temp)
		// {
		// 	del(temp->content);
		// 	ft_lstclear(&,del);
		// 	free(temp);
		// }
		// temp = temp->next;

		lst = lst->next;
	}
	temp->next = NULL;
	return (inicio_new_list);
}
