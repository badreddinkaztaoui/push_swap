/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:39:45 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/09/03 00:10:25 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	algorithm(t_node **stack_a, t_node **stack_b)
{
	if (is_sorted(stack_a))
		return ;
	if (ft_listsize((*stack_a)) <= 3)
		sort_three_nums(stack_a);
	else if (ft_listsize((*stack_a)) > 3 && ft_listsize((*stack_a)) <= 5)
		sort_five_nums(stack_a, stack_b);
	else if (ft_listsize(*stack_a) > 5 && ft_listsize(*stack_a) <= 10)
		sort_ten_num(stack_a, stack_b);
	else
	{
		index_nodes(stack_a);
		sort_mult_nums(stack_a, stack_b);
		push_b_to_a(stack_a, stack_b);
	}
}
