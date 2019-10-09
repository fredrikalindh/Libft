/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 00:29:05 by fredrika          #+#    #+#             */
/*   Updated: 2019/08/01 22:41:15 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list *first;
	t_list *second;
	t_list *prev;
	int last;

	first = *begin_list1;
	second = begin_list2;
	last = -1;
	if (first->data > second->data)
		*begin_list1 = second;
	while (first != NULL && second != NULL)
	{
		while (first->data < second->data)
		{
			prev = first;
			first = first->next;
		}
		prev->next = second;
		while (second->data < first->data)
		{
			prev = second;
			second = second->next;
		}
		prev->next = first;
	}
}
