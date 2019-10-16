/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:45:31 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/16 16:20:01 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (l[i] == '\0')
		return ((char *)b);
	while (b[i] && i < n)
	{
		j = 0;
		while (b[i + j] == l[j] && i + j < n)
		{
			if (l[j + 1] == '\0')
				return ((char *)&b[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
