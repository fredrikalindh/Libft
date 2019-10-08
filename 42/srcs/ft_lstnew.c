/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:54:31 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 15:24:19 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstnew(void const *content)
{
	t_list *new_elem;

	if (!(new_elem = (t_list *)malloc(sizeof(t_list))))
		return (0);
	new_elem->content = ft_strdup(content);
	new_elem->next = NULL;
	return (*new_elem);
}
