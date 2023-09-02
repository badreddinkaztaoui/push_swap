/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mult_nums.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:32 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/01 01:29:08 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	calculate_segment_size(int total_size)
{
	if (total_size == 500)
		return (total_size / 11);
	else if (total_size > 200)
		return (total_size / 5);
	else if (total_size > 100)
		return (total_size / 4);
	else if (total_size > 10)
		return (total_size / 2);
	return (1);
}

void	rotate_stack_b(t_node **a, t_node **b, int index, int size_b)
{
	(void)a;
	if (index < (size_b / 2))
		rb(b);
}

void	process_segment(t_node **stack_a, t_node **stack_b, t_vars *vars)
{
	vars->current_index = 0;
	vars->segment_size += calculate_segment_size(vars->total_size);
	while (vars->current_index < (vars->segment_size - vars->current_count) + 1)
	{
		if ((*stack_a)->index >= vars->current_count
			&& (*stack_a)->index <= vars->segment_size)
		{
			pb(stack_a, stack_b);
			vars->stack_b_head = *stack_b;
			rotate_stack_b(stack_a, stack_b, vars->stack_b_head->index,
				(vars->segment_size + vars->current_count));
			vars->current_index++;
			vars->total_size--;
		}
		else
			ra(stack_a);
	}
	vars->current_count = vars->segment_size + 1;
}

void	sort_mult_nums(t_node **stack_a, t_node **stack_b)
{
	t_vars	vars;

	vars.segment_size = 0;
	vars.total_size = ft_listsize(*stack_a);
	vars.current_count = 0;
	while (*stack_a)
		process_segment(stack_a, stack_b, &vars);
}
