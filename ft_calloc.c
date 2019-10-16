/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:17:33 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/16 14:40:05 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*new_arr;
	size_t	i;
	char	*temp;

	if (!(new_arr = malloc(nitems * size + 1)))
		return (NULL);
	temp = (char *)new_arr;
	i = 0;
	while (i < (nitems * size + 1))
	{
		temp[i] = 0;
		i++;
	}
	return (new_arr);
}
