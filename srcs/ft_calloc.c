/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:17:33 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/09 12:35:30 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*new_arr;
	size_t	i;
	char	*temp;

	if (!(new_arr = malloc(nitems * sizeof(size))))
		return (NULL);
	temp = new_arr;
	i = 0;
	while (i < nitems)
	{
		temp[i] = 0;
		i++;
	}
	return (new_arr);
}
