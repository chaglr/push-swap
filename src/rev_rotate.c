/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:34:43 by muhnal            #+#    #+#             */
/*   Updated: 2023/06/30 15:43:28 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
** a
** [1]	[2]	[3]	[4] null
** C
**
** a			 l
** [1]	[2]	[3]	[4] null
** 			 c
**
** a			 l
** [1]	[2]	[3]	[4]
** 			cur prev next is also itself
** 				<-	-> NULL
**
** a					 l
** [1]	[2]	[3] NULL	[4]
**
** l	 a
** [4] [1]	[2]	[3] NULL
**
** l	   a
** [4] <-[1][2]	[3] NULL
**
** l
** [4] <-[1][2]	[3] NULL
** a
*/

void	rra(t_stack **stack_a)
{
	t_stack	*last;
	t_stack	*temp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp = *stack_a;
	while (temp->next != NULL)
		temp = temp->next;
	last = temp;
	temp->prev->next = NULL;
	last->next = *stack_a;
	(*stack_a)->prev = last;
	*stack_a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*temp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = *stack_b;
	while (temp->next != NULL)
		temp = temp->next;
	last = temp;
	temp->prev->next = NULL;
	last->next = *stack_b;
	(*stack_b)->prev = last;
	*stack_b = last;
	write(1, "rrb\n", 4);
}
