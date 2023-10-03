/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:11:20 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:53:42 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_cleaner(t_stack **stack)
{
	t_stack	*current_node;
	t_stack	*next_node;

	current_node = *stack;
	if (!current_node || !stack)
		return ;
	while (current_node)
	{
		next_node = current_node->next;
		if (current_node->data != 0)
			current_node->data = 0;
		if (current_node->index != 0)
			current_node->index = 0;
		free(current_node);
		current_node = next_node;
	}
	*stack = NULL;
}

void	stack_cleaner_all(t_stack **stack_a, t_stack **stack_b, int *p)
{
	stack_cleaner(stack_a);
	stack_cleaner(stack_b);
	free(p);
	p = NULL;
}
