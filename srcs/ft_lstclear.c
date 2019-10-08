/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:13:19 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 15:23:22 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curr;
	t_list *tofree;

	curr = *lst;
	while (curr != NULL)
	{
		del(curr->content);
		tofree = curr;
		curr = curr->next;
		free(tofree);
	}
	*lst = NULL;
}
