/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:00:34 by ncolin            #+#    #+#             */
/*   Updated: 2019/10/21 16:20:30 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list lst and applies the function f to the content of each
** element. Creates a new list resulting of the successive applications of the
** function f. The del function is here to delete the content of an element
** if needed
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*new_list;

	if (!lst || !f)
		return (0);
	new_list = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		new_list->next = ft_lstnew(lst->next->content);
		lst = lst->next;
	}
	return (new_list);
}
