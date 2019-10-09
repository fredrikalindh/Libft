/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 22:54:52 by frlindh           #+#    #+#             */
/*   Updated: 2019/07/31 21:25:52 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;
	t_list *new_elem;

	list = *begin_list;
	if (!(new_elem = (t_list*)malloc(sizeof(t_list))))
		return ;
	new_elem->data = data;
	new_elem->next = NULL;
	if (list == NULL)
		*begin_list = new_elem;
	else
	{
		while (list->next != NULL)
			list = list->next;
		list->next = new_elem;
	}
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
	ft_list_push_back(&start, "hej");
	ft_list_push_back(&start, "jag");
	ft_list_push_back(&start, "heter");
	ft_list_push_back(&start, "fredrika");
	ft_print_list(start);
	return 0;
}
