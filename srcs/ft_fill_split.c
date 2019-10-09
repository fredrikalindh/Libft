/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:59:40 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 17:13:24 by frlindh          ###   ########.fr       */
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
