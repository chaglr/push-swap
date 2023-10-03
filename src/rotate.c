/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:25:27 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:55:35 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//give a pointer to first and save the 1st elem
//iterate to stack_a pointer to 2nd node
//make 2nd node prev = NULL
//make another node to new first node;
//first make next node == NULL
//boylece ilk elemani stackten silmis olduk.
//bu pointerla (curr )son elemana kadar git
//bu pointerin nextini en basta atadigimiz ilk elmana at
//bu first node previni de current node yap

//	a
//	[1] [2] [3] [4]
//	fi
//
//       a
//	[1]	[2]	[3]	[4]
//	fi
//				  a
//	[1]		null [2][3][4]
//	fi
//
//	a
//	[2][3][4]
//	c
//
//	a
//	[2][3][4]
//		   c
//
//			   fi
//	[2][3][4] [1]
//		   c

void	ra(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*curr;

	if (*stack_a && (*stack_a)->next)
	{
		first = *stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_a)->prev = NULL;
		first->next = NULL;
		curr = *stack_a;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = first;
		first->prev = curr;
		write(1, "ra\n", 3);
	}
}

void	rb(t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*curr;

	if (*stack_b && (*stack_b)->next)
	{
		first = *stack_b;
		*stack_b = (*stack_b)->next;
		(*stack_b)->prev = NULL;
		first->next = NULL;
		curr = *stack_b;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = first;
		first->prev = curr;
		write(1, "rb\n", 3);
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 3);
}
