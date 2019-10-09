/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:45:31 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/09 16:04:34 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (n == 0)
		return (NULL);
	if (l[i] == '\0')
		return (b);
	while (b[i] && i < n)
	{
		j = 0;
		while (b[i + j] == l[j] && i + j < n)
		{
			if (l[j + 1] == '\0')
				return (&b[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
