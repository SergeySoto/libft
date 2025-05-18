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
			inicio_new_list = ft_lstnew(f(lst->content));
			if (!inicio_new_list)
				return (NULL);
		}
		else 
		{
			temp = ft_lstnew(f(lst->content));
			if (!temp)
			{
				ft_lstclear(&temp, del);
				return (NULL);
			}
			ft_lstadd_back(&inicio_new_list, temp);
		}
		lst = lst->next;
	}
	temp->next = NULL;
	return (inicio_new_list);
}
