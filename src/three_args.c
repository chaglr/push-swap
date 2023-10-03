/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:07:43 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:56:04 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort_a(t_stack **stack_a)
{
	int	bottom;
	int	top;
	int	middle;

	top = (*stack_a)->data;
	middle = (*stack_a)->next->data;
	bottom = (*stack_a)->next->next->data;
	if (top > middle && middle < bottom && bottom < top)
		ra(stack_a);
	else if (top > middle && middle < bottom && bottom > top)
		sa(stack_a);
	else if (top < middle && middle > bottom && bottom < top)
		rra(stack_a);
	else if (top < middle && middle > bottom && bottom > top)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (top > middle && middle > bottom && bottom < top)
	{
		sa(stack_a);
		rra(stack_a);
	}
	return ;
}

void	three_sort_b(t_stack **stack_b)
{
	int	bottom;
	int	top;
	int	middle;

	top = (*stack_b)->data;
	middle = (*stack_b)->next->data;
	bottom = (*stack_b)->next->next->data;
	if (top > middle && middle < bottom && bottom < top)
		rb(stack_b);
	else if (top > middle && middle < bottom && bottom > top)
		sb(stack_b);
	else if (top < middle && middle > bottom && bottom < top)
		rrb(stack_b);
	else if (top < middle && middle > bottom && bottom > top)
	{
		rb(stack_b);
		sb(stack_b);
		rrb(stack_b);
	}
	else if (top > middle && middle > bottom && bottom < top)
	{
		sb(stack_b);
		rrb(stack_b);
	}
	return ;
}
