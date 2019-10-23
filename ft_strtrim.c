/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:29:58 by ncolin            #+#    #+#             */
/*   Updated: 2019/10/21 13:23:35 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une copie de la
**	chaine de caractères donnée en argument, sans les
**	caractères spécifiés dans le set donné en argument
**	au début et à la fin de la chaine de caractères.
*/

static int		is_set(char c, char const *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	char			*str;
	size_t			len;
	int				i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (is_set(s1[i], set))
		i++;
	if (s1[i] == '\0')
	{
		if (!(str = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		str = "";
		return (str);
	}
	start = i;
	i = ft_strlen(s1) - 1;
	while (is_set(s1[i], set))
		i--;
	len = i - start + 1;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	return (str = ft_substr(s1, start, len));
}
