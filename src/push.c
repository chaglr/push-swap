/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:04:58 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 11:47:04 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_b == NULL)
		return ;
	temp = *stack_b;
	*stack_b = temp->next;
	if (*stack_b != NULL)
		(*stack_b)->prev = NULL;
	temp->next = *stack_a;
	if (*stack_a != NULL)
		(*stack_a)->prev = temp;
	*stack_a = temp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_a == NULL)
		return ;
	temp = *stack_a;
	*stack_a = temp->next;
	if ((*stack_a) != NULL)
		(*stack_a)->prev = NULL;
	temp->next = *stack_b;
	if ((*stack_b) != NULL)
		(*stack_b)->prev = temp;
	*stack_b = temp;
	write(1, "pb\n", 3);
}
