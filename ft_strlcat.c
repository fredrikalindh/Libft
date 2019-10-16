/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:29:30 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/16 17:09:09 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t l;

	i = 0;
	l = 0;
	while (dest[i] && i < n)
		i++;
	while ((i + l + 1) < n && src[l])
	{
		dest[i + l] = src[l];
		l++;
	}
	if (i != n)
		dest[i + l] = '\0';
	while (src[l])
		l++;
	return (i + l);
}
