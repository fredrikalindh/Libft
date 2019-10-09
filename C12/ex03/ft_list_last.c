/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 22:28:10 by frlindh           #+#    #+#             */
/*   Updated: 2019/07/31 21:22:40 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
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
	t_list *start;
	start = NULL;
	ft_list_push_front(&start, "hej");
	ft_list_push_front(&start, "jag");
	ft_list_push_front(&start, "heter");
	ft_list_push_front(&start, "fredrika");
	ft_putstr(ft_list_last(start)->data);
	return 0;
}
