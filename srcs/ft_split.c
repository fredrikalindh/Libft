/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:11:48 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/09 18:22:08 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_split(char **split, char const *str, char c)
{
	int i;
	int j;
	int a;

	i = 0;
	a = -1;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c)
			a++;
		j = 0;
		while (str[i + j] != c)
			j++;
		if (!(split[a] = (char *)malloc(sizeof(char) * (j + 1))))
			return ;
		j = 0;
		while (str[i] != c)
			split[a][j++] = str[i++];
		split[a][j] = '\0';
	}
	split[a + 1] = NULL;
}

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
