/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 23:16:31 by frlindh           #+#    #+#             */
/*   Updated: 2019/07/31 21:36:05 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, char *str)
{
	t_list* new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return ;
	new->next = *begin_list;
	new->str = str;
	*begin_list = new;
}

t_list *ft_list_push_strs(int size, char **strs)
{
	int i;
	t_list *begin_list;

	begin_list = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&begin_list, strs[i]);
		i++;
	}
	return (begin_list);
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
		ft_putstr(start->str);
		start = start->next;
	}
}

int main(int argc, char *argv[]) {
	t_list *start;
	start = ft_list_push_strs(argc - 1, &argv[1]);
	ft_print_list(start);
	return 0;
}
