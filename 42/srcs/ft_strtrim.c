/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:01:07 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 14:17:32 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		ifirst;
	int		ilast;
	char	*cpy;

	i = 0;
	while (s1[i] && ft_incharset(set, s1[i]))
		i++;
	ifirst = i;
	while (s1[i])
	{
		if (!(ft_incharset(set, s1[i])))
			ilast = i;
		i++;
	}
	if (!(cpy = (char *)malloc(sizeof(char) * (ilast - ifirst + 1))))
		return (NULL);
	i = 0;
	while (s1[ifirst + i] && (i + ifirst) <= ilast)
	{
		cpy[i] = s1[i + ifirst];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
