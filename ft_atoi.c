/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:57:52 by ncolin            #+#    #+#             */
/*   Updated: 2019/10/21 12:33:59 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The atoi() function converts the initial portion of the string pointed
**	to by str to int representation.
*/

static int		ft_isspace(int c)
{
	return (c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r' || c == ' ' ? 1 : 0);
}

int				ft_atoi(const char *str)
{
	int		sign;
	long	total;
	int		total_int;

	sign = 0;
	total = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = (*str == '-') ? 1 : 0;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (sign == 0 && total > 2147483647)
			return (-1);
		else if (sign == 1 && total > 2147483648)
			return (0);
		total = total * 10 + (*str - '0');
		str++;
	}
	total = sign == 1 ? total *= -1 : total;
	total_int = total;
	return (total_int);
}
