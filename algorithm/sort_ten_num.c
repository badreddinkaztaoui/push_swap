/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:12:57 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/01 01:04:07 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_min_to_b_and_sort(t_node **a, t_node **b, int min)
{
	while ((*a)->num != min)
	{
		if ((*a)->next->num == min)
			sa(a);
		else
			rra(a);
	}
	pb(a, b);
}

void	sort_ten_num(t_node **stack_a, t_node **stack_b)
{
	int	min;

	while (ft_listsize(*stack_a) > 3)
	{
		min = ft_min(*stack_a);
		if ((*stack_a)->num == min)
			pb(stack_a, stack_b);
		else
			push_min_to_b_and_sort(stack_a, stack_b, min);
	}
	sort_three_nums(stack_a);
	while (*stack_b)
	{
		if ((*stack_a)->num <= (*stack_b)->num)
			sa(stack_a);
		pa(stack_a, stack_b);
	}
}
