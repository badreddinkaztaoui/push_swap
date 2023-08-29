/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:03:02 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/27 16:03:44 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_min(t_node *stack)
{
	int	min_value;

	min_value = stack->num;
	while (stack)
	{
		if (stack->num < min_value)
			min_value = stack->num;
		stack = stack->next;
	}
	return (min_value);
}
