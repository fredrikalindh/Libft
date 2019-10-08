/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:56:36 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/08 14:16:02 by frlindh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		div;

	if (!(num = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		num[i++] = '-';
		n = -n;
	}
	if (n == 0)
		num[i++] = '0';
	div = 1000000000;
	while (n / div == 0)
		div = div / 10;
	while (div > 0)
	{
		num[i++] = n / div + '0';
		n = n % div;
		div = div / 10;
	}
	num[i] = '\0';
	return (num);
}
