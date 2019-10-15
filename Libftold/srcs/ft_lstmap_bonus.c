/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:19:44 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/10 14:40:10 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *new_elem;
	t_list *temp;

	temp = NULL;
	while (lst != NULL)
	{
		f(lst);
		new_elem = ft_lstnew(lst->content);
		new_elem->next = temp;
		temp = new_elem;
		lst = lst->next;
	}
	return (new_elem);
}
