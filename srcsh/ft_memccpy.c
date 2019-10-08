/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:37:46 by fredrika          #+#    #+#             */
/*   Updated: 2019/08/12 22:41:09 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	char *dest;
	char *srsc;

	i = 0;
	dest = (char *)dst;
	srsc = (char *)src;
	while (i < n)
	{
		dest[i] = srsc[i];
		i++;
	}
	return (dst);
}
