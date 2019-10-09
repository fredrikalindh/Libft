/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 20:52:30 by frlindh           #+#    #+#             */
/*   Updated: 2019/07/31 21:17:37 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

void	ft_list_push_front(t_list **begin_list, int data)
{
	t_list* new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return ;
	new->next = *begin_list;
	new->data = data;
	*begin_list = new;
}

int main() {
	t_list *start;
	start = NULL;
	ft_list_push_front(&start, 3);
	ft_list_push_front(&start, 2);
	ft_list_push_front(&start, 1);
	printf("%d\n", ft_list_size(start));
	return 0;
}
