/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:01:07 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/16 17:28:32 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_incharset(char const *set, char c)
{
	int				i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;
	size_t			i;

	start = 0;
	end = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_incharset(set, s1[start]) == 1 && s1[start] != '\0')
		start++;
	i = start;
	while (s1[i])
	{
		if (ft_incharset(set, s1[i]) == 0)
			end = i;
		i++;
	}
	end = end == 0 ? i : end;
	return (ft_substr(s1, start, (end - start + 1)));
}
