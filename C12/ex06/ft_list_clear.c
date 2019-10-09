/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 23:51:22 by frlindh           #+#    #+#             */
/*   Updated: 2019/07/31 21:40:49 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *tmp;

	while (begin_list != NULL)
	{
		tmp = begin_list;
		free_fct(begin_list->data);
		begin_list = begin_list->next;
		free(tmp);
	}
}

void ft_free(void *data)
{
	free(data); //check if allocated first ?
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
	t_list *start; //haha not quite working yet
	start = NULL;
	ft_list_push_front(&start, "hej");
	ft_list_push_front(&start, "jag");
	ft_list_push_front(&start, "heter");
	ft_list_push_front(&start, "fredrika");
	ft_print_list(start);
	ft_list_clear(start, ft_free);
	ft_print_list(start);
	return 0;
}
