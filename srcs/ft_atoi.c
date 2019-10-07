/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredrika <fredrika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:49:17 by fredrika          #+#    #+#             */
/*   Updated: 2019/08/12 22:22:27 by fredrikalindh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '	' || str[i] == '\f' || str[i] == '\v' ||
			str[i] == '\t' || str[i] == '\r') // kolla så rätt blanks
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb + str[i] - '0';
		i++;
	}
	return (nb * neg);
}
