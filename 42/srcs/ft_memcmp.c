/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:18:14 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 16:51:15 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *t1;
	char *t2;

	i = 0;
	t1 = s1;
	t2 = s2;
	while (i < n && t1[i] == t2[i] && t1[i])
		i++;
	return (t1[i] - t2[i]);
}
