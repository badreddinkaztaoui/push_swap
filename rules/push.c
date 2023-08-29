/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 07:46:07 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/27 17:02:49 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	int	val;

	val = pop(stack_b);
	if (val == -1)
		return ;
	push(stack_a, val);
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	int	val;

	val = pop(stack_a);
	if (val == -1)
		return ;
	push(stack_b, val);
	write(1, "pb\n", 3);
}
