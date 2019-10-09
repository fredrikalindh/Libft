/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 00:04:30 by fredrika          #+#    #+#             */
/*   Updated: 2019/07/31 21:47:57 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;
	t_list *list;

	i = 0;
	list = begin_list;
	while (list && i < nbr)
	{
		if (i == nbr - 1)
		return (list);
		i++;
		list = list->next;
	}
	return (NULL);
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

void ft_print_list(t_list *start)
{
	while (start != NULL) {
		printf("%d\n", start->data);
		start = start->next;
	}
}

int main()
{
	t_list *start;
	start = NULL;
	ft_list_push_front(&start, 0);
	ft_list_push_front(&start, 1);
	ft_list_push_front(&start, 2);
	ft_list_push_front(&start, 3);
	ft_print_list(start);
	printf("%d\n", ft_list_at(start, 2)->data);
	return 0;
}
