/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:18:08 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 11:45:42 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_limit(int base, char *str, int i, int sign);

int	ft_atoi(char *str)
{
	int	sign;
	int	base;
	int	i;

	sign = 1;
	base = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		check_limit(base * sign, str, i, sign);
		base = 10 * base + (str[i++] - '0');
	}
	return (base * sign);
}

static void	check_limit(int base, char *str, int i, int sign)
{
	int	max;
	int	min;

	max = 2147483647;
	min = -2147483648;
	if (((base > max / 10) || ((base == max / 10) && (str[i] - '0' > 7)))
		&& sign == 1)
	{
		ft_error();
	}
	if (((base < min / 10) || ((base == min / 10) && (str[i] - '0' > 8)))
		&& sign == -1)
	{
		ft_error();
	}
}
