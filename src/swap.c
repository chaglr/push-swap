/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:52:43 by muhnal            #+#    #+#             */
/*   Updated: 2023/06/30 12:46:38 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//swap the first of two node data.
#include "push_swap.h"

void	sa(t_stack **stack_a)
{
	int	temp;

	if ((*stack_a)->next && *stack_a)
	{
		temp = (*stack_a)->data;
		(*stack_a)->data = (*stack_a)->next->data;
		(*stack_a)->next->data = temp;
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **stack_b)
{
	int	temp;

	if ((*stack_b)->next && *stack_b)
	{
		temp = (*stack_b)->data;
		(*stack_b)->data = (*stack_b)->next->data;
		(*stack_b)->next->data = temp;
		write(1, "sb\n", 3);
	}
}
