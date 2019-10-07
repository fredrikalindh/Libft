/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:50:54 by fredrika          #+#    #+#             */
/*   Updated: 2019/08/12 22:57:04 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s [i] == c)
		return (&s[i]);
	return (NULL);
}
