/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 00:13:27 by fredrika          #+#    #+#             */
/*   Updated: 2019/08/01 22:25:20 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *curr;
	t_list *new_node;

	curr = *begin_list;
	if (!(new_node = (t_list *)malloc(sizeof(t_list))))
		return ;
	new_node->data = data;
	if (cmp(data, curr->data) < 0)
	{
		new_node->next = curr;
		*begin_list = new_node;
	}
	else
	{
		while (curr != NULL)
		{
			if (curr->next == NULL || cmp(data, (curr->next)->data) < 0)
			{
				new_node->next = curr->next;
				curr->next = new_node;
				return ;
			}
			curr = curr->next;
		}
	}
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *prev;
	t_list *curr;
	t_list *next;

	curr = *begin_list;
	prev = NULL;
	while (curr != NULL && curr->next != NULL)
	{
		next = curr->next;
		if (cmp(curr->data, next->data) > 0)
		{
			curr->next = next->next;
			next->next = curr;
			if (prev != NULL)
				prev->next = next;
			else
				*begin_list = next;
			curr = *begin_list;
			prev = NULL;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
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

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main() {
	t_list *start;
	start = NULL;
	ft_list_push_front(&start, "1");
	ft_list_push_front(&start, "2");
	ft_list_push_front(&start, "4");
	ft_list_push_front(&start, "2");
	ft_list_push_front(&start, "8");
	ft_list_push_front(&start, "6");
	ft_print_list(start);
	write(1, "\n \n", 3);
	ft_list_sort(&start, ft_strcmp);
	ft_print_list(start);
	ft_sorted_list_insert(&start, "3", ft_strcmp);
	write(1, "\n \n", 3);
	ft_print_list(start);
	return 0;
}
