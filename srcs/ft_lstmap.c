/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:19:44 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/09 14:29:35 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *new_elem;
	t_list *temp;

	temp = NULL;
	while (lst != NULL)
	{
		f(lst->content);
		new_elem = ft_lstnew(lst->content);
		new_elem->next = temp;
		temp = new_elem;
	}
	return (new_elem);
}
