/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_nums.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:35:40 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/27 17:38:54 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_chunk(t_node **stack_a, t_node **stack_b)
{
	int	min;

	while (ft_listsize(*stack_a) > 3)
	{
		min = ft_min(*stack_a);
		if ((*stack_a)->num == min)
			pb(stack_a, stack_b);
		else if ((*stack_a)->next->num == min)
		{
			sa(stack_a);
			pb(stack_a, stack_b);
		}
		else if (ft_lastnode(stack_a).num == min)
		{
			rra(stack_a);
			pb(stack_a, stack_b);
		}
		else
			ra(stack_a);
	}
}

void	sort_five_nums(t_node **stack_a, t_node **stack_b)
{
	int	min;

	ft_chunk(stack_a, stack_b);
	sort_three_nums(stack_a);
	while (*stack_b)
	{
		min = ft_min(*stack_a);
		if ((*stack_a)->num < min)
			ra(stack_a);
		pa(stack_a, stack_b);
	}
}
