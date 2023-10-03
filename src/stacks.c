/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:00:54 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:25:02 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*last_stack(t_stack *stack)
{
	while (stack)
	{
		if (stack->next == NULL)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

int	stack_size(t_stack **stack)
{
	int		count;
	t_stack	*temp;

	count = 0;
	temp = *stack;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

t_stack	*new_stack(int data)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->index = 0;
	return (new_node);
}

void	stack_addback(t_stack **stack, t_stack *new_node)
{
	t_stack	*last;

	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	last = last_stack(*stack);
	last->next = new_node;
	new_node->prev = last;
}
