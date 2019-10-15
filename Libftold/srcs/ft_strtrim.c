/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:01:07 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/10 11:27:46 by frlindh          ###   ########.fr       */
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
	while (s1[i] != '\0' && ft_incharset(set, s1[i]))
		i++;
	ifirst = i;
	while (s1[i])
	{
		if (!(ft_incharset(set, s1[i])))
			ilast = i;
		i++;
	}
	if (!(cpy = (char *)malloc(sizeof(char) * (ilast + 1))))
		return (NULL);
	i = -1;
	while (s1[++i + ifirst] && i + ifirst <= ilast)
		cpy[i] = s1[i + ifirst];
	cpy[i] = '\0';
	return (cpy);
}
