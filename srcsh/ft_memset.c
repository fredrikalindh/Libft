/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:09:56 by fredrika          #+#    #+#             */
/*   Updated: 2019/08/12 22:20:16 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	int i;
	char *s;

	i = 0;
	s = (char*)str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return(str);
}
