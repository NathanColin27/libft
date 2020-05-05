/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:00:29 by ncolin            #+#    #+#             */
/*   Updated: 2019/10/21 16:20:26 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**	Deletes and frees the given element and every successor of that element,
**	using the function del and free(3)
** 	Finally, the pointer to the list must be set to	NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp->next)
	{
		temp2 = temp->next;
		ft_lstdelone(temp, del);
		temp = temp2;
	}
	lst = NULL;
}
