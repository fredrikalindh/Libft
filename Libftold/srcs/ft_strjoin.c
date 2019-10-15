/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:54:19 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/09 17:36:18 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*join;

	len = 0;
	while (s1[len])
		len++;
	i = 0;
	while (s2[i])
		i++;
	if (!(join = (char *)malloc(sizeof(char) * (i + len + 1))))
		return (NULL);
	i = -1;
	while (s1[++i])
		join[i] = s1[i];
	len = -1;
	while (s2[++len])
		join[i + len] = s2[len];
	join[i + len] = '\0';
	return (join);
}
