/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:11:48 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 14:32:49 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *str, char c)
{
	int		wc;
	int		i;
	char	**split;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c)
			wc++;
		while (str[i] != c)
			i++;
	}
	if (!(split = (char**)malloc(sizeof(char *) * (wc + 1))))
		return (NULL);
	fill_split(split, str, c);
	return (split);
}
