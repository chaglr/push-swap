/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhnal <muhnal@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:40:30 by muhnal            #+#    #+#             */
/*   Updated: 2023/07/03 13:53:15 by muhnal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				index;
	int				data;
}	t_stack;

void		sort_insertion(int *elem, int length);
size_t		ft_strlen(const char *s);
void		three_sort_a(t_stack **a);
void		three_sort_b(t_stack **b);
void		stack_cleaner_all(t_stack **a, t_stack **b, int *p);
void		double_elem(int *c, int size);
void		ft_putchar_fd(char c, int fd);
void		ft_error(void);
void		ft_putendl_fd(char *str, int fd);
int			is_sorted(t_stack **stack_a, int *elem);
void		digit_checker(char **argv, int i);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		five_args(t_stack **a, t_stack **b, int *sorted_ar);
void		find_min_elem(t_stack **stack_a, int *c, int index, int arg);
void		four_args(t_stack **a, t_stack **b, int *elem);
void		many_args(t_stack **a, t_stack **b, int size);
void		two_args(t_stack **a);
void		find_sorted_index(t_stack **stack_a, int *c);
int			stack_size(t_stack **stack);
void		stack_addback(t_stack **stack, t_stack *new_node);
int			ft_isdigit(int c);
void		ft_error(void);
int			ft_atoi(char *str);
t_stack		*new_stack(int data);
#endif