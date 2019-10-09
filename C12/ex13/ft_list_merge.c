/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:30:36 by fredrika          #+#    #+#             */
/*   Updated: 2019/08/01 21:41:49 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	list = *begin_list1;
	while (list != NULL && list->next != NULL)
	{
		list = list->next;
	}
	list->next = begin_list2;
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list* new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return ;
	new->next = *begin_list;
	new->data = data;
	*begin_list = new;
}

void ft_putstr(char *data)
{
	int i;

	i = 0;
	while (data[i] != '\0')
	{
		write(1, &data[i], 1);
		i++;
	}
}

void ft_print_list(t_list *start)
{
	while (start != NULL)
	{
		ft_putstr((char *)start->data);
		start = start->next;
	}
}

int main() {
	t_list *start1;
	t_list *start2;
	start1 = NULL;
	start2 = NULL;
	ft_list_push_front(&start1, "hej");
	ft_list_push_front(&start1, "jag");
	ft_list_push_front(&start1, "heter");
	ft_list_push_front(&start2, "fredrika");
	ft_list_push_front(&start2, "rika");
	ft_list_push_front(&start2, "hej");
	ft_print_list(start1);
	write(1, "\n \n", 3);
	ft_print_list(start2);
	ft_list_merge(&start1, start2);
	write(1, "\n \n", 3);
	ft_print_list(start1);
	return 0;
}
