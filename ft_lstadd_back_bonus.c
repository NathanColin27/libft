/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:55:29 by ncolin            #+#    #+#             */
/*   Updated: 2019/10/21 16:20:23 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element new at the end of the list.
*/

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	if (!new || !alst)
		return ;
	last = ft_lstlast(*alst);
	last->next = new;
}
