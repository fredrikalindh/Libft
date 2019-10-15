/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:59:40 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/10 00:13:01 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_split(char **split, char const *str, char c)
{
	int i;
	int j;
	int a;

	i = 0;
	a = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		j = 0;
		while (str[i + j] != c && str[i + j])
			j++;
		if (!(split[a] = (char *)malloc(sizeof(char) * (j + 1))))
			return ;
		j = 0;
		while (str[i] != c && str[i])
			split[a][j++] = str[i++];
		split[a][j] = '\0';
		a++;
	}
	if (str[i - 1] == c)
		a--;
	split[a] = NULL;
}
