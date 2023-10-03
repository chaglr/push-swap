/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:33:10 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 15:04:44 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_all(t_stack **stack_a, t_stack **stack_b, int len, int *elem)
{
	double_elem(elem, len);
	sort_insertion(elem, len);
	if (is_sorted(stack_a, elem))
		return ;
	find_sorted_index(stack_a, elem);
	if (len == 2)
		two_args(stack_a);
	else if (len == 3)
		three_sort_a(stack_a);
	else if (len == 4)
		four_args(stack_a, stack_b, elem);
	else if (len == 5)
		five_args(stack_a, stack_b, elem);
	else
		many_args(stack_a, stack_b, len);
	return ;
}

void	init(int argc, char **argv, int i, int len)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*temp;
	int		*elem;
	int		count;

	stack_a = NULL;
	stack_b = NULL;
	if (len != 0)
		elem = malloc(sizeof(int) * (argc));
	else
		elem = malloc(sizeof(int) * (argc - 1));
	if (elem == NULL)
		exit (1);
	count = -1;
	while (i < argc)
	{
		digit_checker(argv, i);
		elem[++count] = ft_atoi(argv[i]);
		temp = new_stack(ft_atoi(argv[i]));
		stack_addback(&stack_a, temp);
		i++;
	}
	sort_all(&stack_a, &stack_b, stack_size(&stack_a), elem);
	stack_cleaner_all(&stack_a, &stack_b, elem);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	init(argc, argv, 1, argc -1);
	return (0);
}
