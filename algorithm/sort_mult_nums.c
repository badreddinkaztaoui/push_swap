/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mult_nums.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:32 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/05 01:42:14 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	adjuste_length(int t_length)
{
	if (t_length == 500)
		return (t_length / 11);
	else if (t_length > 200)
		return (t_length / 5);
	else if (t_length > 100)
		return (t_length / 4);
	else if (t_length > 10)
		return (t_length / 2);
	return (1);
}

void	rotate_stack(t_node **a, t_node **b, int index, int b_length)
{
	(void)a;
	if (index < (b_length / 2))
		rb(b);
}

void	arrange_b(t_node **stack_a, t_node **stack_b, t_params *params)
{
	params->curr_index = 0;
	params->p_length += adjuste_length(params->t_length);
	while (params->curr_index < (params->p_length - params->curr_count) + 1)
	{
		if ((*stack_a)->index >= params->curr_count
			&& (*stack_a)->index <= params->p_length)
		{
			pb(stack_a, stack_b);
			params->b_head = *stack_b;
			rotate_stack(stack_a, stack_b, params->b_head->index,
				(params->p_length + params->curr_count));
			params->curr_index++;
			params->t_length--;
		}
		else
			ra(stack_a);
	}
	params->curr_count = params->p_length + 1;
}

void	sort_mult_nums(t_node **stack_a, t_node **stack_b)
{
	t_params	params;

	params.p_length = 0;
	params.t_length = ft_listsize(*stack_a);
	params.curr_count = 0;
	while (*stack_a)
		arrange_b(stack_a, stack_b, &params);
	push_back_to_a(stack_a, stack_b);
}
