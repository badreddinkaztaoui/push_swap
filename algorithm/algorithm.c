/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:39:45 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/27 17:39:50 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	algorithm(t_node **stack_a, t_node **stack_b)
{
	if (ft_listsize((*stack_a)) <= 3)
		sort_three_nums(stack_a);
	else if (ft_listsize((*stack_a)) > 3 && ft_listsize((*stack_a)) <= 5)
		sort_five_nums(stack_a, stack_b);
}
