/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:17:33 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 15:15:45 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*new_arr;
	size_t	i;

	if (!(new_arr = malloc(nitems * sizeof(size))))
		return (NULL);
	while (i < nitems)
	{
		new_arr[i] = 0;
		i++;
	}
	return (new_arr);
}
