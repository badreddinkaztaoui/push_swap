/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:45:10 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/03 00:31:28 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_max_index_in_b(t_node *stack_b)
{
	int	max_num;
	int	index;

	max_num = ft_max(stack_b);
	index = 0;
	while (stack_b)
	{
		if (stack_b->num == max_num)
			return (index);
		stack_b = stack_b->next;
		index++;
	}
	return (-1);
}

void	put_max_b_in_top(t_node **stack_b)
{
	int		size;
	int		index;
	t_node	*stack_tmp;

	size = ft_listsize(*stack_b);
	stack_tmp = *stack_b;
	index = find_max_index_in_b(*stack_b);
	if (index < (size / 2))
	{
		while (index > 0)
		{
			rb(stack_b);
			index--;
		}
	}
	else
	{
		while (index < size)
		{
			rrb(stack_b);
			index++;
		}
	}
}

void	push_to_a_helper(t_node **stack_a, t_node **stack_b, t_vars_to_a *var)
{
	if ((*stack_b)->num == var->arr[var->i])
	{
		pa(stack_a, stack_b);
		var->i++;
	}
	else if (var->counter == 0
		|| (*stack_b)->num > peek(*stack_a))
	{
		pa(stack_a, stack_b);
		ra(stack_a);
		var->counter++;
	}
	else
		put_max_b_in_top(stack_b);
}

int	is_max_in_b(t_node *stack_b, int val_max)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->num == val_max)
			return (i);
		stack_b = stack_b->next;
		i++;
	}
	return (-1);
}

void	push_b_to_a(t_node **stack_a, t_node **stack_b)
{
	t_vars_to_a	var;

	var.i = 0;
	var.counter = 0;
	var.arr = list_to_array(stack_b, 1);
	while (*stack_b)
	{
		var.index = is_max_in_b(*stack_b, var.arr[var.i]);
		if (var.index != -1)
			push_to_a_helper(stack_a, stack_b, &var);
		else
		{
			rra(stack_a);
			var.counter--;
			var.i++;
		}
	}
	free(var.arr);
	while (var.counter > 0)
	{
		rra(stack_a);
		var.counter--;
	}
}
