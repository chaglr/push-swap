/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_array_sorting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:42:07 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:23:54 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_insertion(int *elem, int length)
{
	int	curr_index;
	int	curr_value;
	int	prev_index;

	curr_index = 1;
	while (curr_index < length)
	{
		curr_value = elem[curr_index];
		prev_index = curr_index - 1;
		while (prev_index >= 0 && elem[prev_index] > curr_value)
		{
			elem[prev_index + 1] = elem[prev_index];
			prev_index--;
		}
		elem[prev_index + 1] = curr_value;
		curr_index++;
	}
}
