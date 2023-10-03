/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:33:49 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:55:44 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != 0)
	{
		counter++;
	}
	return (counter);
}

void	find_sorted_index(t_stack **stack_a, int *c)
{
	int		i;
	t_stack	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		i = 0;
		while (tmp->data != c[i])
			i++;
		tmp->index = i;
		tmp = tmp->next;
	}
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

//return 0;  Return immediately when a discrepancy is found
// return (1) If no discrepancies were found, the stack is sorted
int	is_sorted(t_stack **stack_a, int *elem)
{
	t_stack	*current_node;
	int		index;

	index = 0;
	current_node = *stack_a;
	while (current_node)
	{
		if (current_node->data != elem[index])
		{
			return (0);
		}
		current_node = current_node->next;
		index++;
	}
	return (1);
}
