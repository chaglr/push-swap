/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:11:15 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:55:10 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	digit_checker(char **argv, int i)
{
	int		count;

	count = 0;
	if (argv[i][0] == '-')
	{
		count++;
		if (argv[i][count] == '\0')
		{
			ft_error();
		}
	}
	while (argv[i][count] != '\0')
	{
		if (ft_isdigit(argv[i][count]) == 0)
		{
			ft_error();
		}
		count++;
	}
}
