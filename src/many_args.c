/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   many_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:46:23 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 14:59:18 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_max_bits(int max_index)
{
	int	max_bits;

	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sort_by_bit(t_stack **a, t_stack **b, int size, int bit)
{
	int	j;
	int	num;

	j = -1;
	while (++j < size)
	{
		num = (*a)->index;
		if (((num >> bit) & 1) == 1)
			ra(a);
		else
			pb(a, b);
	}
}

void	transfer_from_b_to_a(t_stack **a, t_stack **b)
{
	while (*b)
		pa(a, b);
}
// 5(101) 3(001) 9(1001) 2(10) 7(1111)
// if last bit (starting left) is 1 push(b);
// if last bit 0 psuh the top of the stack_a ra(a)
// after finish loop all p(b)

void	many_args(t_stack **a, t_stack **b, int size)
{
	int	i;
	int	max_index;
	int	max_bits;

	max_index = size - 1;
	max_bits = calculate_max_bits(max_index);
	i = -1;
	while (++i < max_bits)
	{
		sort_by_bit(a, b, size, i);
		transfer_from_b_to_a(a, b);
	}
}
