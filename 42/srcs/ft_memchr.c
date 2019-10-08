/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:12:09 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 16:50:24 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	char *temp;

	i = 0;
	temp = str;
	while (i < n && temp[i])
	{
		if (temp[i] == c)
			return (&temp[i]);
		i++;
	}
	return (NULL);
}
