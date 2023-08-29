/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_nums.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:33:32 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/27 17:43:29 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three_nums(t_node **stack_a)
{
	int	first;
	int	middle;
	int	last;

	first = (*stack_a)->num;
	middle = (*stack_a)->next->num;
	last = ft_lastnode(stack_a).num;
	if (ft_listsize((*stack_a)) == 2 && (first > last))
		sa(stack_a);
	else if (first > middle && middle > last)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first > last && last > middle)
		ra(stack_a);
	else if (middle > first && first > last)
		rra(stack_a);
	else if (middle > last && last > first)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (last > first && first > middle)
		sa(stack_a);
}
