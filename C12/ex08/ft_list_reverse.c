/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 00:10:56 by fredrika          #+#    #+#             */
/*   Updated: 2019/07/31 21:54:47 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *curr;
	t_list *next;

	prev = NULL;
	curr = *begin_list;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = prev;
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
	printf("\n");	
	ft_list_reverse(&start);
	ft_print_list(start);
	return 0;
}
