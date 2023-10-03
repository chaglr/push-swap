/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:55:50 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:02:31 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min_elem(t_stack **stack_a, int *c, int index, int arg)
{
	t_stack	*temp;
	int		index_min;

	temp = (*stack_a);
	index_min = 0;
	while (temp->data != c[index])
	{
		index_min++;
		temp = temp->next;
	}
	if (index_min > arg / 2)
	{
		while ((*stack_a)->data != c[index])
			rra(stack_a);
	}
	else
	{
		while ((*stack_a)->data != c[index])
			ra(stack_a);
	}
}

void	four_args(t_stack **a, t_stack **b, int *elem)
{
	find_min_elem(a, elem, 0, 4);
	if (!is_sorted(a, elem))
	{
		pb(a, b);
		three_sort_a(a);
		pa(a, b);
	}
}

void	five_args(t_stack **stack_a, t_stack **stack_b, int *elem)
{
	find_min_elem(stack_a, elem, 0, 5);
	if (!is_sorted(stack_a, elem))
	{
		pb(stack_a, stack_b);
		find_min_elem(stack_a, elem, 1, 5);
		if (!is_sorted(stack_a, elem))
		{
			pb(stack_a, stack_b);
			three_sort_a(stack_a);
			pa(stack_a, stack_b);
			pa(stack_a, stack_b);
		}
	}
}
