/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:42:23 by ncolin            #+#    #+#             */
/*   Updated: 2019/10/21 12:35:57 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The calloc() function contiguously allocates enough space for count objects
**	that are size bytes of memory each and returns a pointer to the allocated
**	memory. The allocated memory is filled with bytes of value zero.
*/

void	*calloc(size_t count, size_t size)
{
	void *ptr;

	if (!(ptr = malloc(count * size)))
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
