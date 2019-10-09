/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:07:41 by fredrika          #+#    #+#             */
/*   Updated: 2019/08/01 21:38:18 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
void (*free_fct)(void *))
{
	t_list *curr;
	t_list *next;

	while (begin_list != NULL && cmp((*begin_list)->data, data_ref) == 0)
	{
		next = *begin_list;
		*begin_list = next->next;
		free_fct(next->data);
		free(next);
	}
	curr = *begin_list;
	while (curr != NULL && curr->next != NULL)
	{
		next = curr->next;
		if (cmp(next->data, data_ref) == 0)
		{
			free_fct(next->data);
			curr->next = next->next;
			free(next);
		}
		else
			curr = curr->next;
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

void free_fct(void *data)
{
	if (data == NULL)
		return ;
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
	ft_list_push_front(&start, "hej");
	// ft_list_push_front(&start, "jag");
	// ft_list_push_front(&start, "heter");
	// ft_list_push_front(&start, "fredrika");
	ft_list_push_front(&start, "rika");
	ft_list_push_front(&start, "hej");
	ft_print_list(start);
	write(1, "\n \n", 3);
	ft_list_remove_if(&start, "hej", ft_strcmp, free_fct);
	ft_print_list(start);
	return 0;
}
