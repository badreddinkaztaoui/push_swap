/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:30:06 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/26 14:46:24 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rev_rotate(t_node **stack)
{
	t_node	*last;
	t_node	*first;
	t_node	*top;

	if ((!*stack) || !(*stack)->next)
		return ;
	first = *stack;
	last = *stack;
	while (last->next->next)
		last = last->next;
	top = last->next;
	last->next = NULL;
	*stack = top;
	top->next = first;
}

void	rra(t_node **stack_a)
{
	rev_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	rev_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	write(1, "rrr\n", 4);
}
