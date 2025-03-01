/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlindh <frlindh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:56:36 by frlindh           #+#    #+#             */
/*   Updated: 2019/10/16 15:46:51 by frlindh          ###   ########.fr       */
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
	if ((div = 1000000000) > 0 && n < 0)
	{
		num[i++] = '-';
		if (n == -2147483648)
			num[i++] = '2';
		n = n == -2147483648 ? 147483648 : -n;
	}
	while (n / div == 0 && div > 1)
		div = div / 10;
	while (div >= 1)
	{
		num[i++] = n / div + '0';
		n = n % div;
		div = div / 10;
	}
	num[i] = '\0';
	return (num);
}
