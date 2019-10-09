/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:37:01 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 15:10:58 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!(sub = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		sub[i] = s[start + i];
		i++;
	}
	if (s[i] == '\0')
		sub[i] = '\0';
	return (sub);
}
