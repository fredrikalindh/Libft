/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:00:59 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/09 15:53:25 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		ilast;
	char	*temp;

	i = 0;
	ilast = -1;
	temp = (char *)str;
	while (temp[i])
	{
		if (temp[i] == c)
			ilast = i;
		i++;
	}
	if (ilast >= 0)
		return (&temp[ilast]);
	if (temp[i] == c)
		return (&temp[i]);
	return (NULL);
}
